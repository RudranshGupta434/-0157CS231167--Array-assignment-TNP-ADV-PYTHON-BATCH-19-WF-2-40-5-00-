// 8. Find Pair with Given Sum: Find a pair of elements that adds up to a target sum.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> findPair(vector<int>arr, int target){
    sort(arr.begin(),arr.end());
    int i=0,j=arr.size()-1;
    vector<int>ans;
    while(i<j){
    if(arr[i]+arr[j]==target){
        ans.push_back(i);
        ans.push_back(j);
        break;//terminate called after throwing an instance of 'std::bad_alloc' what():  std::bad_alloc
    }
    else if(arr[i]+arr[j]<target) i++;
    else j--;
    }
    return ans;
}

int main(){
    vector<int>arr{1,2,3,4,5};
    // cout<<findPair({1,2,3,4,5},7)[0];
    //terminate called after throwing an instance of 'std::bad_alloc'what():  std::bad_alloc
    vector<int>ans=findPair(arr,7);
    cout<<ans[0]<<ans[1];
return 0;
}
