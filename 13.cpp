//13. Find Duplicates in an Array
#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> findDuplicates(vector<int>nums){
    map<int,int>mpp;
    for(auto num:nums){
        if(mpp.find(num)==mpp.end()) mpp[num]=1;
        else mpp[num]++;
    }
    vector<int>ans;
    for(auto it:mpp){
        if(it.second>1) ans.push_back(it.first);
    }
    return ans;
}

int main(){
    vector<int>ans=findDuplicates({1,1,2,3,4,4});
    for(auto num:ans) cout<<num;
return 0;
}
