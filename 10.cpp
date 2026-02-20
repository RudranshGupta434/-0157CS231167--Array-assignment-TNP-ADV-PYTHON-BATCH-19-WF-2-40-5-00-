//10. Merge Two Sorted Arrays
#include<iostream>
#include<vector>
using namespace std;

//in place
// void mergeArrays(vector<int>a,vector<int>b){
//    //112344 1234
//    int i=0,j=0;
//    while(i<a.size() && j<b.size()){
    
//    }     
// }
vector<int> mergeArrays(vector<int>a,vector<int>b){
   //112344 1234
   int i=0,j=0;
   vector<int>ans;
   while(i<a.size() && j<b.size()){
    if(a[i]<=b[j]) 
    {
        ans.push_back(a[i]);
        i++;
    }
    else{
        ans.push_back(b[j]);
        j++;
    }
   }  
   return ans;   
}

int main(){
    vector<int>a{1,1,2,3,4,4};
    vector<int>b{1,2,3,4};
    vector<int>ans=mergeArrays(a,b);
    for(auto num:ans) cout<<num;
return 0;
}
