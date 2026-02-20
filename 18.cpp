// 18. Move Zeroes to End: Move all zeroes in an array to the end while maintaining the order of non-zero elements.
//swap nhi krna h
#include<iostream>
#include<vector>
using namespace std;

void moveZero(vector<int>&arr){
    int iz=0,inz=0;
    while(iz<arr.size() && inz<arr.size()){
        while(arr[iz]!=0) iz++;
        while(arr[inz]==0) inz++;
        if(arr[iz]<arr[inz]){
            swap(arr[iz],arr[inz]);
            iz++;
            inz++;
        }
    }
}

int main(){
    vector<int>arr{1,0,2,3,0,0,4,4};
    moveZero(arr);
    for(auto num:arr) cout<<num;
return 0;
}
