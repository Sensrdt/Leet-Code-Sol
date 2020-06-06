class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        
        return (check(s1, s2) || check(s2, s1));        
    }
    
    bool check(string s, string s1){
        bool change = true;
        for (int i=0; i<s.length(); i++){
            if (s[i] < s1[i]){
                change = false;
                break;
            }
        }
        return change;
    }
};