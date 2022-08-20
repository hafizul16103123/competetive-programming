
function lengthOfLongestSubstring(s: string): number {
    if(s===' ') return 1;
    const slen = s.length;
    let subStr = '';
    let subStrLen = 0;
    for (let index = 0; index < slen; index++) {
        const char = s[index];
        if(!subStr.includes(char)){
            subStr = subStr +char
            if(subStrLen<subStr.length){
                subStrLen=subStr.length
            }
       
        }else{
            if(subStrLen<subStr.length){
                subStrLen=subStr.length
            }
            subStr=''
            subStr=subStr+char
        }
    }
    return subStrLen
};
// const s = " "
// const s = "abcabcbb"
// const s = "bbbbb"
// const s = "pwwkew"
const strArr=["","abcabcbb","bbbbb","pwwkew","c","dvdf"]
for (const str of strArr) {
    console.log(lengthOfLongestSubstring(str))
}