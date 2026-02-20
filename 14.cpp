//14. Find Intersection of Two Arrays: Find the common elements between two arrays.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>ans;
        int i=0,j=0,count=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]) {
                i++;
                count=0;
            }
            else if(nums1[i]==nums2[j]) {
                j++;
                if(count<1) ans.push_back(nums1[i]);
                count++;
            }
            else j++;
        }
        
        return ans;
    }

int main(){
    vector<int>a{1,2,3,4,5};
    vector<int>b{2,3,4,5,6};
    vector<int>ans=intersection(a,b);
    for(auto num:ans) cout<<num;
return 0;
}
