class Solution {
public:
    string toLowerCase(string str) {
        return tolower(str);
    }
    
    string tolower(string s){
        string fs;
        for (auto a : s){
            if ((int)a >= 65 and (int)a < 97){
                fs += a+32;
            }else{
                fs += a;
            }
            
        }
        
        return fs;
    }
};