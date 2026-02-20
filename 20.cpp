//20. Rotate Array to the Left by k Positions
#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int>&arr,int i,int j,int k){
    for(int i;i<(j+1)/2;i++){
        swap(arr[i],arr[j-i+k+1]);
    }
}

void rotateLeft(vector<int>&arr, int k){
    reverseArray(arr,0,arr.size()-1,k);
    reverseArray(arr,0,k,k);
    reverseArray(arr,k+1,arr.size()-1,k);
}

int main(){
    vector<int>arr{1,2,3,4,5};
    rotateLeft(arr,3);
    for(auto num:arr){
        cout<<num;
    }
return 0;
}