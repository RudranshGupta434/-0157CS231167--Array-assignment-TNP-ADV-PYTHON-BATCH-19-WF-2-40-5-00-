//26. Find Peak Element: A peak element is greater than its neighbors. Find one such element.
#include<iostream>
#include<vector>
using namespace std;

int peakElement(vector<int> &arr) {
    int n = arr.size();
  
    if (n == 1) 
        return 0;
        
    if (arr[0] > arr[1])
        return 0;
        
    if (arr[n - 1] > arr[n - 2])
        return n - 1;
    
    int s = 1, e = n - 2;
    
    while(s <= e) {
        int mid = s + (e - s)/2;
        if(arr[mid] > arr[mid - 1] 
                       && arr[mid] > arr[mid + 1])
            return mid;
        if(arr[mid] < arr[mid + 1])
            s = mid + 1;
        else
            e = mid - 1;
    }
    
    return 0;
}

int main(){
    vector<int>arr{1,2,3,4,3,2};
    cout<<peakElement(arr);
return 0;
}
