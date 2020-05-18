class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        int totalSum = 0;
        int max_ending_here = 0;
        int min_ending_here = 0;
        int max_sum = INT_MIN;
        int min_sum = INT_MAX;
        
        for (auto x : A){
            totalSum += x;
            max_ending_here = max(max_ending_here + x, x);
            max_sum = max(max_ending_here, max_sum);
            min_ending_here = min(min_ending_here + x, x);
            min_sum = min(min_ending_here, min_sum);
        }
        
        if (max_sum > 0){
            return max(max_sum, totalSum - min_sum);
        }
        
        return max_sum;
        
    }
};