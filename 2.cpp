// 2. Find the Maximum & Minimum Element
#include<iostream>
#include<vector>
using namespace std;

// using pairwise comparison
vector<int> maxMin(vector<int>arr){
    int size=arr.size();
    int mini,maxi;
    int i;
    if(size%2==0){
        mini=min(arr[0],arr[1]);
        maxi=max(arr[0],arr[1]);
        i=2;
    }    
    else{
        mini=maxi=arr[0];
        i=1;
    }
    for(i;i<size-1;i+=2){
        int miniT,maxiT;
        if(arr[i]<arr[i+1]) {
            miniT=arr[i];
            maxiT=arr[i+1];
        }
        else{
            miniT=arr[i+1];
            maxiT=arr[i];
        }
        mini=min(mini,miniT);
        maxi=max(maxi,maxiT);
    }
    vector<int>ans;
    ans.push_back(mini);
    ans.push_back(maxi);
    return ans;
}

int main(){
    vector<int>arr{1,3,2,4};
    vector<int>ans=maxMin(arr);
    cout<<ans[0]<<ans[1];
return 0;
}
