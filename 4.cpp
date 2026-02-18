// 4. Find the Second Largest Element

#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

int secLargest(vector<int>arr){
    int size=arr.size();
    int secMax=INT_MIN,maxi=INT_MIN;
    for(int i=0;i<size;i++){
        int temp=max(maxi,arr[i]);
        if(temp!=maxi) secMax=maxi;
        maxi=temp;
    }
    return secMax;
}

int main(){
    cout<<secLargest({2,3,5,1});
return 0;
}
