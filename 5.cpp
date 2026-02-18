// 5. Count Frequency of Elements
#include<iostream>
#include<vector>
using namespace std;

int firstocc(vector<int>arr, int elem){
    int s=0,e=arr.size()-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]==elem) e=mid;
        else if(arr[mid]>elem) e=mid-1;
        else s=mid+1;
        mid=s+(e-s)/2;
    }
    return mid;
}
int lastocc(vector<int>arr, int elem){
    int s=0,e=arr.size()-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]==elem) s=mid;
        else if(arr[mid]>elem) e=mid-1;
        else s=mid+1;
        mid=s+(e-s)/2;
    }
    if(e==arr.size()-1) return e;
    return mid;
}

int countFreq(vector<int>arr){

}

int main(){
    cout<<lastocc({1,1,2,3,4,4,4},4);
return 0;
}

