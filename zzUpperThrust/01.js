// let Let=true;
// const a=1;
// //a=2;
// console.log(a);
// console.log(Let);
// console.log(typeof(Let));
//let Let = false;
//  Let = false;

// for(var i=0;i<3;i++){
//     console.log(i);
// }
// console.log(i);


//console.log(parseInt("10.5"));

// let a=12;
// //console.log(sum(12,13));
// // function sum(a,b){
// //     return a+b;
// // }
// let sum = function(a,b){
//     return a+b;
// }
// console.log(typeof (sum));

//let a1 = [1,2,3,"four"];
// //console.log(a1[0]);
// let o1 = {
//     'a':1,
//     b:2
// }
// console.log(o1.a);
// //console.log(o1[a]);//error
// console.log(o1['a']);
// console.log(typeof(o1['a']));

// console.log(this.o1);

// function sum(){
//     function add(){
//         console.log("function add called");
//     }
//     return add;
// }
// let smu1=sum;//assigning the function
// let sum2=sum();//calling the function
// sum2();

// setTimeout(
//     function foo(){
//     console.log("in seTimeout")
//     },
//     1000
// );
// console.log("Line after setTimeout");

const a1=[1,2,3,"a",'b'];
let a2=a1.map(function(a){
    //console.log(a);
})
a1.forEach(function(a){
    //console.log(a);
    a=2;
})

console.log(a1);