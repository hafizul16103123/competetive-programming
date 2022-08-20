"use strict";
const str = "XYZ";
const str2 = "ZXY";
// const str2 = "YXZ";
let arr = [];
for (const key of Object.keys(str)) {
    const numKey = Number(key);
    let nextPos = Number(key) + 1;
    if (nextPos == str.length) {
        nextPos = 0;
    }
    arr[nextPos] = str[numKey];
}
const retateStr = arr.join('');
if (str2 == retateStr) {
    console.log("true");
}
else {
    console.log('false');
}
/**
 * 1) How to find the maximum occurring character in a given String?
 */
//  const str = "abacdcec";
//  // const str = "Java";
//  const countObj:any = {}; 
//  for (const char of str) {
//      if(char in countObj){
//          countObj[char]++;
//      }else{
//          countObj[char]=1;
//      }
//  }
//  //find max value from object
//  console.log(countObj)
//  const maxVal:any = Object.values(countObj).sort().pop()
//  const a = Object.keys(countObj).reduce((accu:any,key:any)=>{
//      accu[countObj[key]] = key;
//      return accu
//  },{})
//  console.log(a)
//  console.log(a[maxVal])
/**
 * 9) How to find the first non-repeating character in a given String?
 */
// const str = "Java";
// const arr:any[] = []
// for (const char of str) {
//   if(!arr.includes(char)){
//     arr.push(char)
//   }
// }
// console.log(arr.shift())
/**
 * find duplicate char fron string
 */
// const str = "Javav";
// let arr: any[] = [];
// let arrDuplicateChar: any[] = [];
// for (const char of str) {
//   if (!arr.includes(char)) {
//     arr.push(char)
//   } else {
//     arrDuplicateChar.push(char)
//   }
// }
// console.log(arrDuplicateChar)
/**
 * 12) How to check if two given String is the anagram of each other?
 */
// const str1= "Army"
// const str2= "Mari"
// let isAnagram =true;
// for (const char of str1.toLowerCase()) {
//   if(!str2.toLowerCase().includes(char)){
//     isAnagram=false
//     break
//   }
// }
// console.log(isAnagram)
/**
 * find_large_prefix_form_array_of_string
 */
// const arr = ["geeksforgeeks", "geeks", "geek", "geezer"];
// const firstStr = arr[0];
// let str='';
// for (let index = 0; index < firstStr.length; index++) {
//   const slice = firstStr.slice(0, index + 1) //g,ge,gee
//   let exists = true
//   for (const el of arr) {
//     if (!el.includes(slice)) {
//       exists = false
//       break
//     }
//   }
//   if (!exists) {
//     str = firstStr.slice(0,index);
//     break
//   }
// }
// console.log(str)
/**
 * remove all vowel from a string
 */
//  let str:string = "abcdefgh iy";
//  const strWithourVowel = str.replace(/[aeiou]/gi,'')
//  console.log(strWithourVowel)
/**
 * replace all vowel with * from a string
 */
// let str:string = "abcdefgh iy";
// const strWithourVowel = str.replace(/[aeiou]/gi,'*')
// console.log(strWithourVowel)
