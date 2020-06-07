class Solution {
public:
    vector<int> sumZero(int n) {
        if (n == 1) return {0};
        vector<int> ans;
        int s = 0;
        for (int i=0; i<n-1; i++)
        {
            ans.push_back(i+1);
            s += i+1;
        }
        
        ans.push_back(-s);
        return ans;
    }
};