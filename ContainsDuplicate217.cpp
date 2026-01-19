#include<iostream>
#include<vector>    
#include<algorithm>
using namespace std;
bool containduplicate(vector<int>&arr){
    sort(arr.begin(),arr.end());
    for(int i=1;i<arr.size();i++){
        if(arr[i]==arr[i-1]){
            return true;
        }
    }
    return false;
}

int main(){
    int size;
    cout<<"enter the size";
    cin>>size;
    vector<int>arr(size);
    cout<<"enter the elements";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<containduplicate(arr);
    return 0;
}