var fs = require('fs');
var util = require('util');
var path = require('path');
var mkdirp = require('mkdirp');

fs.readFile('./symbols.json', function(err, data) {
  if (err) {
    console.log("Error reading symbols.json " + err);
    return;
  }

  var hFileText = 
"/*******************************\n\
* Module: %s\n\
* Original path: %s\n\
* Lines of code: %s\n\
********************************/\n\n\
class %s {\n\n\
\t// Properties:\n\
%s\n\
\t// Methods:\n\
%s\n\
};";

  var symbols = JSON.parse(data);
  var fullOutput = '';

  for (var i = 0; i < symbols.moduleRefs.length; i++) {
    var module = symbols.moduleRefs[i];

    var props = "";
    var procs = "";

    module.symbols.forEach(function(sym) {
      if (sym.type == "DATA") {
        props += "\tvoid* " + sym.name + ";\n";
      }
    });

    module.symbols.forEach(function(sym) {
      if (sym.type == "PROC") {
        var name = sym.name;
        // method names seem to almost always end with _, just remove it.
        if (name[name.length-1] == '_') name = name.substr(0, name.length-1);
        procs += "\tvoid* " + name + "();\n"
      }
    });

    var output = util.format(hFileText, 
      module.name,
      module.fileName ? module.fileName : "unknown",
      module.lineCount ? module.lineCount : "unknown",
      module.name,
      props,
      procs);

   fullOutput += output + "\n\n";

    var outputFile;
    if (module.fileName != null)
      outputFile = "symbols/" + module.fileName.substr(3); //chop off 'c:/'
    else
      outputFile = "symbols/no_sym_file_path/" + module.name + ".c";

    (function(file, output) {
   
      var outputPath = path.dirname(file);
      mkdirp(outputPath, function(err) {
        if (err) console.error(err);
        fs.writeFile(file, output, function(err) {
          if (err) throw err;
          console.log("written " + file);
        });
      });
    })(outputFile, output);
  }

  // dump all outputs to all.c, for easy grepping :)
  fs.writeFile("symbols/all-modules.c", fullOutput, function(err) {
    if (err) throw err;
  });
   
});
