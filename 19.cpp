//19. Find Subarray with Given Sum.
#include<iostream>
#include<vector>
using namespace std;

vector<int> subSum(vector<int>arr,int k){
    int i=0,j=1;
    int sum=arr[i];
    vector<int>ans;
    while(j<arr.size()){
        if(sum==k){
            ans.push_back(i);
            ans.push_back(j-1);
        }
        else if(sum>k){
            while(sum>k) {sum-=arr[i];
            i++;}
        }
        while(sum<k){ 
        sum+=arr[j];
        j++;}
        
        
    }
    return ans;
}

int main(){
    vector<int>ans=subSum({1,2,3,4,5},10);
    for(auto num:ans) cout<<num;
return 0;
}
