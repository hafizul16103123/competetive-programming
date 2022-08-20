// /**
//  * 
//  * @param myNumber Read a value of floating point with two decimal places. This represents a monetary value. After this, calculate the smallest possible number of notes and coins on which the value can be decomposed. The considered notes are of 100, 50, 20, 10, 5, 2. The possible coins are of 1, 0.50, 0.25, 0.10, 0.05 and 0.01. Print the message “NOTAS:” followed by the list of notes and the message “MOEDAS:” followed by the list of coins.

// Input
// The input file contains a value of floating point N (0 ≤ N ≤ 1000000.00).

// Output
// Print the minimum quantity of banknotes and coins necessary to change the initial value, as the given example.
//  */
// function f(myNumber: number) {
//     let firstPart = Math.trunc(myNumber);
//     let lastPart = Number(myNumber.toString().split('.')[1])||0;
//     console.log({firstPart,lastPart})
//     const notes=[100,50,20,10,5,2]
//     const coins=[100,50,25,10,5,1]
//     const noteObj:any={};
//     const coinObj:any={};
//     let reminder=0;
//     console.log('NOTAS:')
//     for (const note of notes) {
//         const res = firstPart/note
//         const truncRes= Math.trunc(res)
//         const decimalNumber =note.toFixed(2)
//         noteObj[decimalNumber] = truncRes
//         console.log(`${truncRes} nota(s) de R$ ${decimalNumber}`)
//         reminder = firstPart%note;
//         firstPart = reminder
//     }
//     if(reminder>0){
//         lastPart= lastPart + reminder * 100
//     }
//     console.log('MOEDAS:')
//     for (const coin of coins) {
//         const res = lastPart/coin
//         const truncRes= Math.trunc(res)
//         const decimalNumber =coin.toFixed(2)
//         coinObj[decimalNumber] =truncRes
//         console.log(`${truncRes} nota(s) de R$ ${decimalNumber}`)
//         let reminder = lastPart%coin;
//         lastPart = reminder
//     }
// }
// // const haystack = "hello", needle = "ll"
// // const myNumber = 576.73;
// // const myNumber = 91.01;
// const myNumber = 4.00;
// f(myNumber)





