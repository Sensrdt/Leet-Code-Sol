class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int n = nums.size();
        
        if (n == 1)
        {
           return target == nums[n]  ? 0 : -1;
        }
        
        int s = 0, e = n-1;
        
        while(s < e)
        {   
            int m = (s+e) / 2;
            
            if (nums[m] == target)
            {
                return m;
            }
            
            if (nums[s] <= nums[m])
            {
                if (nums[s] <= target && target < nums[m])
                {
                    e = m;
                }else{
                    s = m + 1;
                }
            }else{
                if (nums[m] < target && target <= nums[e])
                {
                    s = m + 1;
                }else{
                    e = m ;
                }
            }
        }
        
        return (s == e && nums[s] == target) ? s : 1;
    }
};