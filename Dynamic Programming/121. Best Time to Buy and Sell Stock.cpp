//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int best = 0, min = INT_MAX, max = 0;
        for (int i=0; i<n; i++){
           if (prices[i] < min){
               min = prices[i];
           }
           if (prices[i] - min > max){
               max = prices[i]-min;
           }
        }
        
        return max;
    }
};