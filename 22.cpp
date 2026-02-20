//22. Find All Subarrays
#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> allSub(vector<int>arr){
    vector<vector<int>>ans;
    for(int i=0;i<arr.size();i++){
        vector<int>temp;
        temp.push_back(arr[i]);
        for(int j=i+1;j<arr.size();j++){
            ans.push_back(temp);
            temp.push_back(arr[j]);
        }
    }
    return ans;
}

int main(){
    vector<vector<int>>ans=allSub({1,2,3,4});
    for(auto it:ans){
        for(auto num:it)cout<<num;
        cout<<endl;
    }
return 0;
}
