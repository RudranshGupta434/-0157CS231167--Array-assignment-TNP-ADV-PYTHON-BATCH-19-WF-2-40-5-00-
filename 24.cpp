//24. Rearrange Array Alternately: Rearrange an array such that elements alternate between the largest and smallest.
#include<iostream>
#include<vector>
using namespace std;

void rearrange(vector<int>&a, int n)
{
    int arr_new[n];
    int low = 0, high = n - 1;
    int flag = true;
    
    for (int i = 0; i < n; i++) {
        if (flag)
            arr_new[i] = a[high--];
        else
            arr_new[i] = a[low++];
 
        flag = !flag;
    }
    for (int i = 0; i < n; i++)
        a[i] = arr_new[i];
}

int main(){
    vector<int>arr={1,2,3,4,5};
    rearrange(arr,5);
    for(auto num:arr) cout<<num;
return 0;
}
