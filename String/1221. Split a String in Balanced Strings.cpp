class Solution {
public:
    int balancedStringSplit(string s) {
        int n = s.length();
        int cr = 0, cl = 0;
        int ans = 0;
        
        for (int i=0; i<n; i++){
            if (s[i] == 'R'){
                cr++;
            }else{
                cl++;
            }
            
            if (cr == cl){
                ans++;
                cr = 0;
                cl = 0;
            }
        }
        
        return ans;
    }
};