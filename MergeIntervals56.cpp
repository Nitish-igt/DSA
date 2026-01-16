#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;

        for (int i = 0; i < intervals.size(); i++) {
            if (ans.empty()) {
                ans.push_back(intervals[i]);
            } else {
                vector<int>& v = ans.back();

                if (intervals[i][0] <= v[1]) {
                    v[1] = max(v[1], intervals[i][1]);
                } else {
                    ans.push_back(intervals[i]);
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution s;

    // Input intervals
    vector<vector<int>> intervals = {
        {1, 3},
        {2, 6},
        {8, 10},
        {15, 18}
    };

    vector<vector<int>> result = s.merge(intervals);

    // Output
    cout << "Merged Intervals:\n";
    for (auto &v : result) {
        cout << "[" << v[0] << ", " << v[1] << "] ";
    }

    return 0;
}


// ___________________________________
// Sample Input:                            SIMPLE FOR LEETCODEE



class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;

        for(int i=0;i<intervals.size();i++){
            if(ans.empty()){
                ans.push_back(intervals[i]);
            }
            else{
                vector<int> &v= ans.back();

                int y= v[1];

                if(intervals[i][0]<=v[1]){
                    v[1]=max(intervals[i][1],y);
                }else{
                    ans.push_back(intervals[i]);
                }
            }
        }
        return ans;
    }
};
