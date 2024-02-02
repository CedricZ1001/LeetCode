// 3. 无重复字符的最长子串
// 给定一个字符串 s ，请你找出其中不含有重复字符的 最长子串 的长度。

// 示例 1:

// 输入: s = "abcabcbb"
// 输出: 3 
// 解释: 因为无重复字符的最长子串是 "abc"，所以其长度为 3。
// 示例 2:

// 输入: s = "bbbbb"
// 输出: 1
// 解释: 因为无重复字符的最长子串是 "b"，所以其长度为 1。
// 示例 3:

// 输入: s = "pwwkew"
// 输出: 3
// 解释: 因为无重复字符的最长子串是 "wke"，所以其长度为 3。
//      请注意，你的答案必须是 子串 的长度，"pwke" 是一个子序列，不是子串。
 
// 提示：
// 0 <= s.length <= 5 * 104
// s 由英文字母、数字、符号和空格组成


#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;


int lengthOfLongestSubstring(string s) {
    if (s.size() == 0) {
        return 0;
    }
    unordered_map<char, int> charIndexMap; // 存储字符及其最新索引
    int maxLength = 0; // 最长子串的长度
    int start = 0; // 无重复子串开始的索引

    for (int end = 0; end < s.size(); ++end) {
        // 如果字符已存在于当前无重复子串中，则更新开始索引
        if (charIndexMap.find(s[end]) != charIndexMap.end() && charIndexMap[s[end]] >= start) {
            start = charIndexMap[s[end]] + 1;
        }

        // 更新字符的最新索引
        charIndexMap[s[end]] = end;
        // 更新最长无重复子串的长度
        maxLength = max(maxLength, end - start + 1);
    }
    return maxLength;
}

int main(){
    cout<<lengthOfLongestSubstring("abcabcbb")<<'\n';
    return 0;
}