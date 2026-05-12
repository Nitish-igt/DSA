/*
Code
Testcase
Testcase
Test Result
1665. Minimum Initial Energy to Finish Tasks
Solved
Hard
Topics
premium lock icon
Companies
Hint
You are given an array tasks where tasks[i] = [actuali, minimumi]:

actuali is the actual amount of energy you spend to finish the ith task.
minimumi is the minimum amount of energy you require to begin the ith task.
For example, if the task is [10, 12] and your current energy is 11, you cannot start this task. However, if your current energy is 13, you can complete this task, and your energy will be 3 after finishing it.

You can finish the tasks in any order you like.

Return the minimum initial amount of energy you will need to finish all the tasks.

 

Example 1:

Input: tasks = [[1,2],[2,4],[4,8]]
Output: 8*/

class Solution {
public:
    int minimumEffort(vector<vector<int>>& tasks) {
        sort(tasks.begin(), tasks.end(),[](vector<int>& a , vector<int>& b){
            return (a[1]-a[0])>(b[1]-b[0]);
        });
        int min_res=0;
        int curr=0;

        for(auto& task : tasks){
            if(curr<task[1]){
                min_res+=task[1]-curr;
                curr=task[1];
            }
            curr-=task[0];
        }
        return min_res;
    }
};