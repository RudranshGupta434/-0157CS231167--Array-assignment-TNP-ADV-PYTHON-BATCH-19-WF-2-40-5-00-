// 3. Find the Sum of Elements
#include<iostream>
#include<vector>
using namespace std;

int sumArr(vector<int>arr){
    int sum=0;
    for(auto num:arr){
        sum+=num;
    }
    return sum;
}

int main(){
    cout<<sumArr({1,2,3,4});
return 0;
}
