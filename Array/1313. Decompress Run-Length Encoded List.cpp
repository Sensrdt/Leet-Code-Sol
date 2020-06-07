class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> ans;
        for (int j=0; j<n; j+=2)
        {
            int a = nums[j];
            int b = nums[j+1];

            for (int i=0; i<a; i++)
            {
                ans.push_back(b);
            }    
        }
        
        return ans;
    }
};