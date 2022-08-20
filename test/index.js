// function mode(arr){
//     return arr.sort((a,b) =>
//           arr.filter(v => v===a).length
//         - arr.filter(v => v===b).length
//     ).pop();
// }
// const arr = [3, 2,1,3];
// const a = mode(arr);
// console.log(a);
// const len =  arr.filter(v => v===a);
// console.log(len);

const arr = [3,2,2,1];
const arrayWithCount = [];
const uniqueArray = [];
for (const i of arr) {
    if(arrayWithCount[i]){
        arrayWithCount[i] = arrayWithCount[i] + 1;
    }else{
        arrayWithCount[i] = 1;
        uniqueArray.push(i);
    }
}

const obj = {};
for (const i of uniqueArray){
        obj[i] = arrayWithCount[i]
    }
    const values = Object.values(obj)
    console.log(values)
    const re = Math.max(...values)
    console.log(typeof re)
    console.log(re)

