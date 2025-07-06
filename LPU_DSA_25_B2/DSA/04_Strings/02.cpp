/*
https://leetcode.com/problems/valid-palindrome/
class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length()-1;

        while(left<=right){
            while(left < right && !isalnum(s[left])) left++;
            while(left < right && !isalnum(s[right])) right--;

            if(tolower(s[left]) != tolower(s[right])){
            return false;
        }
        left++;
        right--;
    }
    return true;
        }

        
};



https://leetcode.com/problems/longest-substring-without-repeating-characters/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int left = 0, right = 0;    
        int maxLen = 0;

        while(right < s.length()){
            if(seen.find(s[right]) == seen.end()){
                seen.insert(s[right]);
                maxLen = max(maxLen, right - left + 1);
                right++;
            }
            else{
                seen.erase(s[left]);
                left++;
            }
        }
        return maxLen;
    }
};
*/

