//33. Find Maximum Difference (j > i)
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int maxDiff(vector<int>arr){
    int maxi=INT_MIN;
    int mini=INT_MAX;
    int diff=0;
    for(auto num:arr){
        maxi=max(maxi,num);
        mini=min(mini,num);
        diff=maxi-mini;
    }
    return diff;
}

int main(){
    cout<<maxDiff({1,2,3,4});
return 0;
}
