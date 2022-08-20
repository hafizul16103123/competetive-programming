
// function f(s: string) {

//     let n: number = 0;
//     const len = s.length;
//     const subsRule:any= {'I':'VX',"X":"LC","C":"DM"}
//     for (let i = 0; i < s.length;) {

//         if (len == 0) return romanLetter[s[i]]
//         const a:number = romanLetter[s[i]];
//         const b:number = romanLetter[s[i + 1]] || 0;
//         const sub:string = subsRule[s[i]]
//         let matchSubRule;
//         if(sub){
//          matchSubRule = sub.includes(s[i + 1])
//         }
//         if(matchSubRule){
//             n=n+(b-a);
//             i=i+2;
//         }else{
//             n=n+a;
//             i=i+1;
//         }
//     }
//     console.log({n})
// }
// const romanLetter: any = { 'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000, 'O': 0 };
// const inputNumber = ["I","II","III","IV","IX", "LVIII", "MCMXCIV"];
// // const inputNumber = ["MCMXCIV"];
// // const inputNumber = ["IX",'IV'];
// for (const iterator of inputNumber) {
//     f(iterator)
// }
