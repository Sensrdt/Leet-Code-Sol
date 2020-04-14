class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        
        for (int i=0; i<n; i++){
            if (nums[i] != 0){
                count++;
            }
        }
        
        for (int i=count; i<n; i++){
            nums[i] = 0;
        }
    }
};