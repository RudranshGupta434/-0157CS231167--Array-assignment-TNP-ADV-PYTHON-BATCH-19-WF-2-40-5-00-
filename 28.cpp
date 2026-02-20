// 28. Sort an Array of 0s, 1s, and 2s: Sort an array consisting of only 0s, 1s, and 2s.
#include<iostream>
#include<vector>
using namespace std;

void sort012(vector<int>& nums) {
        int i=0,l=0,h=nums.size()-1;
    while(i<=h){
        if(nums[i]==0){
            swap(nums[i],nums[l]);
            l++;
            i++;
        }
        else if(nums[i]==2){
            swap(nums[i],nums[h]);
            h--;
        }
        else{
            i++;
        }
    }
}

int main(){
    vector<int>arr{1,0,2,1,2,0,2};
    sort012(arr);
    for(auto num:arr) cout<<num;
return 0;
}
