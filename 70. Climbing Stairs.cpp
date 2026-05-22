/*70. Climbing Stairs
Solved
Easy
Topics
premium lock icon
Companies
Hint
You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

 

Example 1:

Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps*/
class Solution {
public:
    int climbStairs(int n) {
        if(n<=1) return n;

        vector<int> climn(n+1);
        climn[1]=1;
        climn[2]=2;

        for(int i=3;i<=n;i++){
            climn[i]=climn[i-1]+climn[i-2];
        }
        return climn[n];
    }
};
 