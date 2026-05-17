/*Easy
Topics
premium lock icon
Companies
Given a string s and an integer k, reverse the first k characters for every 2k characters counting from the start of the string.

If there are fewer than k characters left, reverse all of them. If there are less than 2k but greater than or equal to k characters, then reverse the first k characters and leave the other as original.

 

Example 1:

Input: s = "abcdefg", k = 2
Output: "bacdfeg"*/
class Solution {
public:
    string reverseStr(string s, int k) {
        string  ans= "";
        for(int i=0;i<s.size();i+=2*k){
            string rev="";
            // fist k reverse
            for(int j=min(i+k-1, (int)s.size()-1);j>=i;j--){
                rev.push_back(s[j]);
            }
            ans+=rev;
            // next same
            for(int j=i+k;j<i+2*k && j<s.size();j++){
                ans.push_back(s[j]);
            }
        }
        return ans;
    }
};