let yashobj = {
    name:"yash",
    age : 20
}
function namechanger(newname){
    yashobj.name=newname;
}
function agechanger(newage){
    yashobj.age=newage;
}
function personchanger(pname,page){
    
    namechanger(pname);
    agechanger(page);
    
}
console.log("prev values:",yashobj.name," ",yashobj.age);
personchanger("sumith",19);
console.log("prev values:",yashobj.name," ",yashobj.age);
