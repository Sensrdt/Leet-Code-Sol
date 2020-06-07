class Solution {
public:
    int numTeams(vector<int>& rating) {
        
        int n = rating.size();
        
        if (n == 0){
            return 0;
        }
        
        int ans = 0;
        
        
        for (int i=1; i<n-1; i++){
        int is = 0, il = 0, ks = 0, kl = 0;

            for (int j=0; j<i; j++){
                if (rating[i] < rating[j]){
                    is++;
                }else if (rating[j] < rating[i]){
                    il++;
                }
            }
            
            for (int k=i; k<n; k++){
                if (rating[i] < rating[k]){
                    ks++;
                }else if (rating[k] < rating[i]){
                    kl++;
                }
            }
           ans += (is * kl) + (ks * il);

        }        
        return ans;
        
    }
};