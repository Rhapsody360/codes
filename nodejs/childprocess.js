let  cp = require("child_process");
//console.log("started childjs")
let output = cp.execSync("node nodejs\\childjs.js");
console.log("hello " + output);
