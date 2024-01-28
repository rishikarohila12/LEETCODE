// class Solution {
// public:
//     int findContentChildren(vector<int>& g, vector<int>& s) {
//         sort(s.begin(), s.end());
//         sort(g.begin(), g.end());
//         int i = 0;
//         int j = 0;
//         int count = 0;
//         while (i < g.size() && j < s.size()) {
//             if (s[j] >= g[i]) {
//                 count++;
//                 i++;
//                 j++;
//             } else
//                 j++;
//         }
//         return count;
//     }
// };

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mp; // val -> index

        for (int i = 0; i < n; i++) {
            int complement = target - nums[i];
            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }
            mp.insert({nums[i], i});
        }
        return {};
    }
};