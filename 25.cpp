//25. Find Majority Element: Find the element that appears more than n/2 times.
#include<iostream>
#include<vector>
#include<limits.h>
#include<map>
using namespace std;

int majorityElement(vector<int>& nums) {
        map<int,int>freq;
        for(auto num:nums){
            if(freq.find(num)==freq.end()) freq[num]=0;
            freq[num]++;
        }
        int maxi=INT_MIN;
        int max_i;
        for(auto it:freq){
            if(maxi<=it.second){
                maxi=max(maxi,it.second);
                max_i=it.first;
            }   
        }
        return max_i;
    }

int main(){
    vector<int>arr={1,2,2,2,3,4,2};//error  initializing argument 1 of 'int majorityElement(std::vector<int>&)'int majorityElement(vector<int>& nums) {
    // cout<<majorityElement({1,2,2,2,3,4,2});
    cout<<majorityElement(arr);
return 0;
}
