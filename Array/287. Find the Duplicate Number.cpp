class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int s = nums[0];
        int f = nums[0];
        
        s = nums[s];
        f = nums[nums[f]];
        
        while(s != f){
            s = nums[s];
            f = nums[nums[f]];
        }
        
        int first = nums[0];
        int second = s;
        
        while(first != second){
            first = nums[first];
            second = nums[second];
        }
        
        return second;
        
    }
};