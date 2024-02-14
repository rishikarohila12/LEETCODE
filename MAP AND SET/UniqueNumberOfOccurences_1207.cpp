#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<vector>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
    }
    unordered_set<int>s;
    for(auto x:m){
            int freq=x.second;
            if(s.find(freq)!=s.end()){
                    return false;
            }
            else s.insert(freq);
    }
    return true;
        
    }
};