//29. Find the Longest Consecutive Sequence: Find the length of the longest consecutive sequence of integers.
#include<iostream>
#include<vector>
using namespace std;

int lcs(vector<int>arr){
    int count=0;
    for(int i=0;i<arr.size()-1;i++){
        int countt=0;
        while(arr[i+1]-arr[i]==1){i++;
        countt++;}
        count=max(count,countt);
        
    }
    return count;
}

int main(){
    cout<<lcs({1,2,3,4,6,7,4,5,6,7,8,9});
    
return 0;
}
