class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
       int n = words.size();
       vector<string> ans;
        for (int i=0; i<n; i++){
            if (check(words[i], pattern)){
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
    
    bool check(string x, string y){
        if (x.size() != y.size()){
            return false;
        }
        
        for (int i=0; i<x.size(); i++){
            for (int j=i+1; j<y.size(); j++){
                if (x[i] == x[j] and y[i] != y[j]){
                    return false;
                }else if (x[i] != x[j] and y[i] == y[j]){
                    return false;
                }
            }
        }
        return true;
    }
};