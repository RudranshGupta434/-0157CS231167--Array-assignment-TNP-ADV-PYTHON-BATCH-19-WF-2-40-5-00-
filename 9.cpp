//9. Remove Duplicates from Array: Remove duplicates from the array while maintaining order.
#include<iostream>
#include<vector>
using namespace std;

void remDuplicates(vector<int>&arr){
    // vector<int>ans;
    int i=0,j=1;
    while(j<arr.size()){
        if(arr[i]==arr[j]) j++;
        else{
            i++;
            arr[i]=arr[j];
        }
    }
}

int main(){
    vector<int>arr{1,1,2,3,4,4};
    remDuplicates(arr);
    for(auto num:arr){
        cout<<num;
    }
return 0;
}
