"use strict";
// /**
//  * 1) How to find the maximum occurring character in a given String? 
//  */
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
//  const maxVal:any = Object.values(countObj).sort().pop()
//  const a = Object.keys(countObj).reduce((accu:any,key:any)=>{
//      accu[countObj[key]] = key;
//      return accu
//  },{})
//  console.log(a[maxVal])
