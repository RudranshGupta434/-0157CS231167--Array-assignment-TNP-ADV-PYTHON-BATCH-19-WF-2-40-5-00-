//23. Maximum Sum Subarray (Kadane's Algorithm)
#include<iostream>
#include<vector>
using namespace std;

// int maxub(vector<int> &arr) {
//     int res = arr[0];           
//     int maxi = arr[0];     
//     for (int i = 1; i < arr.size(); i++) {
//         maxi = max(arr[i], maxi + arr[i]);
//         res = max(res, maxi);
//     }
//     return res;
// }

int maxSub(vector<int>arr){
    int maxsum=0;
    int maxi=0;
    for(int i=0;i<arr.size();i++){
        maxsum+=arr[i];
        maxi=max(maxi,maxsum);
        if(maxsum<0) maxsum=0;
    }
    return maxi;
}

int main(){
    cout<<maxSub({1,2,3,-7,10});
return 0;
}
