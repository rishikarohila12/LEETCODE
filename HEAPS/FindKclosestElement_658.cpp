#include<iostream>
#include <queue>
#include<vector>
using namespace std;
class Solution {
public:
    typedef pair<int, int> p;
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<p> pq;
        for (auto ele : arr) {
            int dis = abs(x - ele);
            pq.push({dis, ele});
            if (pq.size() > k)
                pq.pop();
        }
        vector<int> ans;
        while (pq.size() > 0) {
            int ele = pq.top().second;
            ans.push_back(ele);
            pq.pop();
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};