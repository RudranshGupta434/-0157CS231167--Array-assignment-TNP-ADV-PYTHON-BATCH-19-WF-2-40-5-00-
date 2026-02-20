//17. Find the Leader Elements: An element is a leader if it is greater than all elements to its right.
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

vector<int> leaderElem(vector<int>arr){
    int maxi=INT_MIN;
    vector<int>ans;
    for(int i=arr.size()-1;i>=0;i--){
        int maxiT=max(maxi,arr[i]);
        if(maxi!=maxiT) ans.push_back(arr[i]);
        maxi=max(maxi,arr[i]);
    }
    return ans;
}

int main(){
    vector<int>ans=leaderElem({6,1,2,4,3,5});
    for(auto num:ans) cout<<num;
return 0;
}
