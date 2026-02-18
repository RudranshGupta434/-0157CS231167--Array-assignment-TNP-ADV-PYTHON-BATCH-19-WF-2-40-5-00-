// 1. Reverse an Array
#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int>&arr){
    for(int i=0;i<arr.size()/2;i++){
        swap(arr[i],arr[arr.size()-i-1]);
    }
}

int main(){
    vector<int>ans{1,2,3,4};
    reverseArray(ans);
    for(auto num:ans){
        cout<<num;
    }

return 0;
}
