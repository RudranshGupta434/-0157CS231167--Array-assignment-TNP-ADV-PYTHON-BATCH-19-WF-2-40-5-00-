// 30. Product of Array Except Self
// Given an array, return a new array where each element is the product of all elements except itself.
// Do not use division.
// Input: [1,2,3,4]
// Output: [24,12,8,6]
#include<iostream>
#include<vector>
using namespace std;

vector<int> prodSelf(vector<int>arr){
    vector<int>pprod(arr.size());
    vector<int>sprod(arr.size());
    int pre=1;
    for(int i=0;i<arr.size();i++){
        pprod[i]=pre;
        pre*=arr[i];
    }
    int suf=1;
    for(int i=arr.size()-1;i>=0;i--){
        sprod[i]=suf;
        suf*=arr[i];
    }
    vector<int>ans;
    for(int i=0;i<arr.size();i++){
        int temp=pprod[i]*sprod[i];
        ans.push_back(temp);
    }
    return ans;
}

int main(){
    vector<int>ans=prodSelf({1,2,3,4});
    for(auto num:ans) cout<<num<<" ";
return 0;
}
