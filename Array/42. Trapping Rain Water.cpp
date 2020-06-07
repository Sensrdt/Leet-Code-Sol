class Solution {
public:
    int trap(vector<int>& h) {
        
        int n = h.size();
        
        int left = 0, right = n-1;
        
        int lm = 0, rm = 0;
        
        int w = 0;
        
        while(left < right){
            if (h[left] < h[right]){
                if (h[left] > lm){
                    lm = h[left];
                }else{
                    w += -h[left] + lm ;
                }
                left++;
            }else{
                if (h[right] > rm){
                    rm = h[right];
                }else{
                    w += -h[right] + rm;
                }
                right--;
            }
        }
        return w;
    }
};