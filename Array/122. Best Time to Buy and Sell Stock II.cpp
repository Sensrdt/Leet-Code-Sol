class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n = p.size();
        int max = 0;
        for (int i=1; i<n; i++){
            if (p[i] > p[i-1]){
                max += p[i] - p[i-1];
            }
        }
        
        return max;
    }
};