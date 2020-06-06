class Solution {
public:
    string freqAlphabets(string s) {
        
        unordered_map<string,string> map = {
            {"1","a"}, {"2","b"}, {"3","c"}, {"4","d"}, {"5","e"}, {"6","f"}, {"7","g"},                 {"8","h"}, {"9","i"}, {"10","j"}, {"11","k"}, {"12","l"}, {"13","m"},                       {"14","n"}, {"15","o"}, {"16","p"}, {"17","q"}, {"18","r"}, {"19","s"},                     {"20","t"},{"21","u"},{"22","v"},{"23","w"},{"24","x"},{"25","y"},{"26","z"}
        };
        
        string ans;
        
        int n = s.length();
        for (int i=n-1; i>=0; i--){
            if (s[i] == '#'){
                i = i-2;
                ans += map[s.substr(i, 2)];
            }else{
                ans += map[s.substr(i, 1)];
            }            
        }
        string ret = reverse(ans);
        return ret;
    }
    
    string reverse(string ans){
        string re;
        for (int i=ans.length()-1; i>=0; i--){
            re += ans[i];
        }
        
        return re;
    }
};