#include<iostream>
#include<iostream>
class Solution {
public:
int reverse(int n){
    int s=0,r=0;
    while(n>0){
        r=n%10;
        s=r+(s*10);
        n=n/10;
    }
    return s;
}
    int countDistinctIntegers(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>s;
        for(int i=0;i<n;i++)
        {
            int rev=reverse(nums[i]);
           s.insert(rev);
           s.insert(nums[i]);
        }
        return s.size();
        
    }
};