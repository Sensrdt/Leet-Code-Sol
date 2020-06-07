class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        vector<int> v(0, nums.size());
        
        int count;
        int n = nums.size();
        for (int i=0; i<n; i++){
            count = 0;
            for (int j=0; j<n; j++){
                if (nums[i] > nums[j] && i != j){
                    count++;
                }
            }
            v.push_back(count);
        }
        
        return v;
        
    }
};