#include<iostream>
#include<queue>
#include<unordered_map>
#include<vector>
using namespace std;
class Solution {
public:
typedef pair<int,int> pp;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto ele:nums)
        {
            mp[ele]++;
        }
        priority_queue<pp,vector<pp>,greater<pp>>pq;
        for(auto x:mp){
            int ele=x.first, freq=x.second;
            pair<int,int>p={freq,ele};
            pq.push(p);
            if(pq.size()>k) pq.pop();
        }
        vector<int>ans;
        while(pq.size()>0){
            int ele=pq.top().second;
            ans.push_back(ele);
            pq.pop();
        }
            return ans;

        
    }
};