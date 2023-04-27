let array = ['a','yash',1,true,2.5];
let i = 0;
array.push("last");//append ate rear
array.unshift("first value")//append at front

//printing using while loop
// while (i<array.length){
//     console.log(array[i]);
//     i++;
// }


array.pop();//remove from rear
array.shift();//remove from front

//direct printing
//console.log(array);


//slicing an array using start index and ending index makes a copy of modified array 
// let newarray=array.slice(0,3);
// console.log(newarray);

//splicing = deletion using start and count index changes actual array
console.log(array.splice(2,3));