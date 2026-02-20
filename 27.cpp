//27. Find the First Missing Positive: Find the smallest positive integer missing in the array.
#include<iostream>
#include<vector>
using namespace std;

int firstMissPos(vector<int> &arr) {
    int n = arr.size();

    vector<bool> arr_visited(n, false);
    for (int i = 0; i < n; i++) {

        if (arr[i] > 0 && arr[i] <= n)
            arr_visited[arr[i] - 1] = true;
    }

    for (int i = 1; i <= n; i++) {
        if (!arr_visited[i - 1]) {
            return i;
        }
    }

    return n + 1;
}

int main(){
    vector<int>arr{-1,-2,3,4,5};
    cout<<firstMissPos(arr);
return 0;
}
