// /**
//  * Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
 

// Example 1:

// Input: s = "()"
// Output: true
// Example 2:

// Input: s = "()[]{}"
// Output: true
// Example 3:

// Input: s = "(]"
// Output: false
//  */
// const s = "())[]{}";
// function isValid(s: string): boolean {
//     const brancketObj: any = { "(": 1, "{": 2, "[": 3, ")": -1, "}": -2, "]": -3 }
//     if (brancketObj[s.charAt(0)] < 0) {
//         return false
//     }
//     let stack = []
//     for (const val of s) {
//         const currentBracketValue: number = brancketObj[val]
//         if (currentBracketValue < 0) {
//             const previousBracketValue = brancketObj[stack[stack.length - 1]]
//             const addition = currentBracketValue + previousBracketValue
//             if (addition == 0) {
//                 stack.pop()
//             } else {
//                 stack.push(val)
//             }

//         } else {
//             stack.push(val)
//         }
//     }
//     if (stack.length == 0) {
//         return true
//     } else {
//         return false
//     }

// };
// console.log(isValid(s))