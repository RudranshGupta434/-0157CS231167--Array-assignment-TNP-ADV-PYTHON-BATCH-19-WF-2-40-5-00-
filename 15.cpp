//15. Find Union of Two Arrays
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

vector<int> findUnion(vector<int>a,vector<int>b){
    unordered_set<int>stt;
    for(auto num:a) stt.insert(num);
    for(auto num:b) stt.insert(num);
    vector<int>ans;
    for(auto it:stt){
        ans.push_back(it);
    }
    return ans;
}

int main(){
    vector<int>ans=findUnion({1,2,3,4,5},{1,2,3,6,7});//7651234 why output unsorted
    for(auto num:ans) cout<<num;
return 0;
}
