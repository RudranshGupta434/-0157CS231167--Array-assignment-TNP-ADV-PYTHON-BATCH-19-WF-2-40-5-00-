//32. Find Maximum Product Pair: Find two elements whose product is maximum.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void maxProduct(vector<int>arr, int n)
{
    sort(arr.begin(), arr.end());
    int num1, num2;

    int prod1 = arr[0] * arr[1];

    int prod2 = arr[n - 1] * arr[n - 2];

    if (prod1 > prod2) 
    {
        num1 = arr[0];
        num2 = arr[1];
    }
    else 
    {
        num1 = arr[n - 2];
        num2 = arr[n - 1];
    }
    cout << ("Max product pair = ") 
         << num1 << "," << num2;
}

int main(){
    maxProduct({1,2,3,4},4);
return 0;
}
