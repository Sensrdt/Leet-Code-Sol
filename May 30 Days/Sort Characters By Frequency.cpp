class Solution {
public:
    string frequencySort(string s) {
        map<int, int> mp;
        priority_queue<pair<int, int>> pq;
        
        for (auto a : s){
            mp[a]++;
        }
        
        for (auto a : mp){
            pq.push({a.second, a.first});
        }
        
        string ans = "";
        
        while(!pq.empty()){
            ans += string(pq.top().first, pq.top().second);
            pq.pop();
        }
        
        return ans;
    }
};