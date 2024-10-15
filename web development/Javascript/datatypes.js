"use strict";  //treat all js code as newer version"
//alert(3+3)  //we are using nodejs not browser
//number=> 2 to the power of 53
//bigint=> for large values
//string=>""
//boolean=>true/false
//null=>standalone value
//undefined=>
//symbol=>unique


//object
// console.log(typeof null);  //null type is object
// console.log(typeof undefined);
//comparison of datatypes
//both should be of same datatype while doing comparison
//"==",while using comparison operator it will convert null to zero
// console.log(undefined>0);
// console.log(undefined==0);  //we should o-avoid these type of comparisons
// console.log(undefined<0);

//===
//it will compare datatypes as well as values
// console.log("2"===2);
 
//Datatypes
//how data is being kept and accessed in memory
//mainly primitive and non primitive
//Primitive//referenceed types
//it uses copy of elements
//7 types: string ,number,boolean,null,undefined,Symbol(for making any value unique we use symbol),Bog int(for big values)

//Referenced type/non primitve
//directly accessible
//Array,Objects, functions

// const score=10
// const scorevalue=100.3
// const isloggedin=false
// const outsidetemp=null
// // let useremail;
// const id=Symbol('123')
// const anotherid=Symbol('123')
// console.log(id===anotherid);
// const bignumber=25638495947739393n;  //for bigdata


//Reference(NOn premitive)
//Arrays,objects,Functions
//  const heroes=["shaktiman","naaga","doga"];
//  //for curly braces we have objects
//  let myobj={
//     name: "hitesh",
//     age: 22,
//  }
//  //for declaring any function
//  const myfunction=function(){
//     console.log("Hello world");
//  }
//  //for detecting the type of any variable
//  console.log(typeof outsidetemp)
//  //undefined=undefined,Null=>Object,Boolean=>Boolean,Number=>Number,String=>String
// //jitne bhi non primitve type hai unka type hmesha object hi aata hai
// console.log(typeof heroes)
// console.log(typeof myfunction)
// //abhi myfunction ka function aa rha hai but when you will study in detail to uska object hi aayega function object
// console.log(typeof anotherid)  
//it will return symbol
//stack memory(Primitive),heap memory(Non primitive)
//this is primitve,yha pr mai another name ko myidname de rhi hu lekin vo change nahi hoga
//vo bss myidname ki ek copy allocate krega aur jab y another name me change ho rha hai to fir y
//copy me hi change hoga ,myidname ki original value same hi rhegi
let myidname="palakmalik.com"
let anothername=myidname
anothername="chaiaurcode"
console.log(anothername);
console.log(myidname)
//yha niche ye non primitive ka use kr rha hai,aur original value me change kr rha hai
//yha user ka email aur usertwo ka email dono change hp rhe hai
let user={
    email:"malikpalak@12.com",
    upi:"user@123"
}
let usertwo=user
usertwo.email="palku.com";
console.log(usertwo.email);
console.log(user.email);



