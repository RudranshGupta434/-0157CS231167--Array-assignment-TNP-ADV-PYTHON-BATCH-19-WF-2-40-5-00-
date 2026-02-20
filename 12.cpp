//12. Find the Missing Number: Find the missing number in an array of size n containing numbers from 1 to n.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findMissing(vector<int>arr){
    //2135
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        if(arr[i]-i!=1) return arr[i]-1;
    }
    return arr.size()+1;
}

int main(){
    cout<<findMissing({1,2,3,4});
return 0;
}
