#include<iostream>
#include<unordered_map>
#include<unordered_map>
class Solution {
public:
    string frequencySort(string s) {
        int n=s.size();
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto x:mp){
            char ele=x.first;
            int freq=x.second;
            pq.push({freq,ele});

        }
       char ch;
       s.clear();
       while(!pq.empty()){
           ch=pq.top().second;
           for(int i=0;i<pq.top().first;i++)
           {
               s+=ch;
           }
           pq.pop();
       }
        return s;


        
    }
};