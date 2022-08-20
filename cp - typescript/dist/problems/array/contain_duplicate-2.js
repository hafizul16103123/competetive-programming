"use strict";
// /**
//  * Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array 
//  * such that nums[i] == nums[j] and abs(i - j) <= k.
//  * @param nums 
//  * @param k 
//  * @returns 
//  */
//  function containsNearbyDuplicate(nums: number[], k: number): boolean {
//     const hashObj: Record<number, number[]> = {}
//     let hasValue = false;
//     for (const [key, val] of nums.entries()) {
//         if (val in hashObj) {
//             const len = hashObj[val].length - 1
//             const i = hashObj[val][len];
//             const j = key;
//             const abs = Math.abs(i - j)
//             console.log({ abs, i, j })
//             if (abs <= k) {
//                 hasValue = true
//             }
//             hashObj[val].push(key)
//         } else {
//             hashObj[val] = [key]
//         }
//     }
//     console.log(hashObj)
//     if (!hasValue) {
//         return false
//     } else {
//         return true
//     }
// };
// const nums = [0,1,2,3,4,0,0,7,8,9,10,11,12,0], k = 1 //true
// // const nums = [1,2,3,1,2,3], k = 2
// // const nums = [1,0,1,1], k = 1
// // const nums = [1, 2, 3, 1, 1, 2, 3], k = 0 //false
// console.log(containsNearbyDuplicate(nums, k))
