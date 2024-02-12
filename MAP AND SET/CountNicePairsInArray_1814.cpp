class Solution {
public:
int rev(int n){
    int s=0;
    while(n>0){
        int r=n%10;
        s=r+(s*10);
        n/=10;
    }
    return s;
}
    int countNicePairs(vector<int>& nums) {
        int count=0;
        unordered_map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            nums[i]-=rev(nums[i]);
        }
       for(int i=0;i<n;i++)
       {
           if(m.find(nums[i])!=m.end()){
               count=count%1000000007;
               count+=m[nums[i]];
               m[nums[i]]++;
           }
           else{
               m[nums[i]]++;
           }


       }
       return count %1000000007;
        
    }
};