"use strict";
// /**
//  * Given an integer array nums, return true if any value appears at least twice
//  * in the array, and return false if every element is distinct.
//  */
// const nums = [1,2,3,1];
// function fn(){
//     const hashObj:Record<string,number>={}
//     let haveTwice = false
//     for (const el of nums) {
//         if(el in hashObj){
//             haveTwice=true;
//             hashObj[el] ++;
//             if(hashObj[el]==2){
//                 console.log(hashObj[el])
//                 return true
//             }
//         }
//         hashObj[el] = 1
//     }
//     if(!haveTwice){
//         return false
//     }else{
//         return true
//     }
// }
// console.log(fn())
