let  cp = require("child_process");
let calculator = cp.execSync("calc");
console.log("opened calcualtor"); 
let javscrpt = cp.execSync("code");
console.log("opened vs code");
let browserstart = cp.execSync("start msedge google.com");
console.log("opened ms edge with google.com")
let output = cp.execSync("node nodejs\\childjs.js");
console.log("runnign childjs.js and getting its otput \nnote : this functionaluty can be used to run any sctipts including python")
console.log("child output: " + output);

