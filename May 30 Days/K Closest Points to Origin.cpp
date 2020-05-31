class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        
        int n = points.size();
        int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
        
        multimap<int, int> mp;
        vector<vector<int>> ans;
        for (int i=0; i<n; i++){
        // euclidean distance formula
            x1 = points[i][0];
            x2 = points[i][0];
            y1 = points[i][1];
            y2 = points[i][1];
            mp.insert({x1*x2 + y1*y2, i});
        }
        
        int i = 0;
        
        for (auto a=mp.begin(); i<K; a++, i++){
            ans.push_back(points[a->second]);
        }
        
        return ans;
    }
};