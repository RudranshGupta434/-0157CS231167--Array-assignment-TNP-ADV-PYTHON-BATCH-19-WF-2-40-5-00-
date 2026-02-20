// 6. Check if Array is Sorted
#include<iostream>
#include<vector>
using namespace std;

bool checkSorted(vector<int>arr){
    int size= arr.size();
    for (int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]) return false;
    }
    return true;
}

int main(){
    cout<<checkSorted({1,2,3,5,4});
return 0;
}
