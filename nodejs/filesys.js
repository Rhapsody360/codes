let fs = require("fs");
let buffer = fs.openSync("child.txt","w");
fs.writeFileSync("child.txt","hum aajkhush hai");
fs.appendFileSync("child.txt","but why?")
// console.log("contents"+buffer)