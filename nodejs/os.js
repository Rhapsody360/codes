let os = require("os");
console.log("os architecture: "+os.arch());
console.log("os plateform: "+os.platform());
console.log("os type: "+os.type());
console.log("os version: "+os.version());
console.log("uptime: "+os.uptime());
//console.log(os.networkInterfaces());
console.log(os.cpus());