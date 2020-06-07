class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int lastReported = k;
       
        for(auto a : nums){
            if (a == 1){
                if (lastReported < k){
                    return false;
                }
                lastReported = 0;
            }else{
                lastReported++;
            }
        }
   
        return true;
    }
};