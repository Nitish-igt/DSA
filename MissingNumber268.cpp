#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int missingno(vector<int>&arr){
    sort(arr.begin(),arr.end());
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i] !=i){
            return i;

        }
    }
    return n;
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
    cout<<missingno(arr);
    return 0;
}