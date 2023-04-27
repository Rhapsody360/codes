console.log("checking number prime");
console.log("enter a nummber:");
let n = 99;
let flag = false;
for (let i = 2;i<n;i++){
    if (n%i==0){
        console.log(i,"is a factor of", n);
        flag = true;
    }
}
if (flag){
    console.log("not prime")

}
else {
    console.log("PRIME !")
}
