// 21. Find the Kth Smallest Element
#include<iostream>
#include<vector>
using namespace std;

int kthsmallest(vector<int>arr,int k){
    for(int i=1;i<=k;i++){
        for(int j=0;j<arr.size()-k-1;j++){
            if(arr[j+1]<arr[j]) swap(arr[j],arr[j+1]);
        }
    }
    return arr[arr.size()-k];
}

int main(){
    cout<<kthsmallest({1,2,3,4,5},3);
return 0;
}
