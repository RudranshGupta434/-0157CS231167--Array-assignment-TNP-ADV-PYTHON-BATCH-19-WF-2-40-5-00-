//16. Check if Two Arrays Are Equal: if two arrays contain the same elements
#include<iostream>
#include<vector>
using namespace std;

bool checkEqual(vector<int>a,vector<int>b){
    int i=0,j=0;
    if(a.size()!=b.size()) return false;
    while(i<a.size()){
        if(a[i]!=b[j]) return false;
        else{
            i++;j++;
        }
    }
    return true;
}

int main(){
    cout<<checkEqual({1,2,3},{1,2,3});
return 0;
}
