#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;
class Solution {
public:
    
        vector<int> frequencySort(vector<int>& nums) {
    // Map to store frequency of each number
    unordered_map<int, int> mp;
    
    // Populate the map
    for (int ele : nums) {
        mp[ele]++;
    }
    
    // Priority queue to sort numbers based on frequency (stored as negative) and number
    priority_queue<pair<int, int>> pq;
    
    // Push elements into priority queue
    for (auto x : mp) {
        pq.push({-x.second, x.first});
    }
    
    // Populate the result vector
    vector<int> ans;
    while (!pq.empty()) {
        auto [negFreq, ele] = pq.top();
        pq.pop();
        for (int i = 0; i < -negFreq; ++i) {
            ans.push_back(ele);
        }
    }
    
    return ans;
}};
        
