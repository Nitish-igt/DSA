#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// function 1: sorting method
int findDuplicateSort(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int i = 0, j = 1;

    while (i < nums.size() - 1) {
        if (nums[i] == nums[j]) {
            return nums[i];
        }
        i++;
        j++;
    }
    return -1;
}

// function posting method
int findDuplicate(vector<int>& nums) {
    while(nums[0] != nums[nums[0]]) {
        swap(nums[0], nums[nums[0]]);
    }
    return nums[0];
}

// function 2: main
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout <<"output: "<< findDuplicateSort(nums);
    cout<<endl;
    cout<<"posting output: "<< findDuplicate(nums);
    return 0;
}
