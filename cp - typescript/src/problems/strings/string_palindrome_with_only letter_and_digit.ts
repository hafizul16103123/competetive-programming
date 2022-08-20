
// function f(s: string) {
//     let str = '';
//     for (const c of s) {
//         const aschii = c.charCodeAt(0)
//         const c1 = aschii >= 'A'.charCodeAt(0)
//         const c2 = aschii <= 'Z'.charCodeAt(0)
//         const c3 = aschii >= 'a'.charCodeAt(0)
//         const c4 = aschii <= 'z'.charCodeAt(0)
//         const c5 = aschii >= '0'.charCodeAt(0)
//         const c6 = aschii <= '9'.charCodeAt(0)
//         if ((c1 && c2) || (c3 && c4) || (c5 && c6)) {
//             str = str + c.toLowerCase()
//         }
//     }
//     const len = str.length;
//     for (let i = 0; i < len/2 ; i++) {
//         if (str[i] != str[(len-1) -i]) {
//             return false
//         }
//     }
//     return true
// }
// // const haystack = "hello", needle = "ll"
// // const myNumber = 576.73;
// // const myNumber = 91.01;
// const s = "A man, a plan, a canal: Panama";
// // const s = "1a2";
// const res = f(s)
// console.log(res)


