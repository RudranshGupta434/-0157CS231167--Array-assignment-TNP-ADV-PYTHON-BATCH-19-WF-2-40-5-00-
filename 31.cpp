// 31. Find Equilibrium Index: Find an index such that sum of elements on left = sum on right.
#include<iostream>
#include<vector>
using namespace std;

int sumSelf(vector<int>arr){
    vector<int>psum(arr.size());
    vector<int>ssum(arr.size());
    int pre=0;
    for(int i=0;i<arr.size();i++){
        psum[i]=pre;
        pre+=arr[i];
    }
    int suf=1;
    for(int i=arr.size()-1;i>=0;i--){
        ssum[i]=suf;
        suf+=arr[i];
    }
    vector<int>ans;
    for(int i=0;i<arr.size();i++){
        if(psum[i]==ssum[i]) {return i;
        break;}
    }
    return -1;
}

int main(){
    cout<<sumSelf({4,1,2,1,1});
return 0;
}
