/*2553. Separate the Digits in an Array
Solved
Easy
Topics
premium lock icon
Companies
Hint
Given an array of positive integers nums, return an array answer that consists of the digits of each integer in nums after separating them in the same order they appear in nums.

To separate the digits of an integer is to get all the digits it has in the same order.

For example, for the integer 10921, the separation of its digits is [1,0,9,2,1].
 

Example 1:

Input: nums = [13,25,83,77]
Output: [1,3,2,5,8,3,7,7]*/

class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {

        vector<int> ans;

        for(int i = 0; i < nums.size(); i++) {

            // single digit
            if(nums[i] < 10) {
                ans.push_back(nums[i]);
            }

            // double or multiple digit
            else {

                string s = to_string(nums[i]);

                for(char ch : s) {
                    ans.push_back(ch - '0');
                }
            }
        }

        return ans;
    }
};