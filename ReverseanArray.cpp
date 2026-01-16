// You are given an array of integers arr[]. You have to reverse the given array.

// Note: Modify the array in place.

// Examples:

// Input: arr = [1, 4, 3, 2, 6, 5]
// Output: [5, 6, 2, 3, 4, 1]
// ___________________________________
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int st = 0;
        int end = arr.size() - 1;

        while (st < end) {
            swap(arr[st], arr[end]);
            st++;
            end--;
        }
    }
};

int main() {
    Solution obj;

    vector<int> arr = {1, 2, 3, 4, 5};

    obj.reverseArray(arr);

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}

