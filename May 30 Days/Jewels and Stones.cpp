class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int n = J.length();
        int m = S.length();
        
        unordered_map<char, int> count;
        int ans = 0;
        
        for (int i=0; i<n; i++){
            count[J[i]]++;
        }
        
        for (int i=0; i<m; i++){
            if (count[S[i]] == 1){
                ans++;
            }
        }
        
        return ans;
    }
};
