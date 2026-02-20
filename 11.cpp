// 11. Remove given Element from Array
#include<iostream>
#include<vector>
using namespace std;

void shiftarr(vector<int>&arr,int k){
    for(int i=k;i<arr.size()-1;i++){
        arr[i]=arr[i+1];
    }
}

void removeElement(vector<int>&arr, int elem){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==elem) {shiftarr(arr,i);
        break;}
    }
}

int main(){
    vector<int>arr={1,2,3,4,5};
    removeElement(arr,3);
    for(auto num:arr) cout<<num;
return 0;
}
