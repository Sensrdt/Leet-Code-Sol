class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int count = 0;
        
        for (int i=0; i<s.length(); i++){
            if (s[i] == '('){
                count++;
            }
            
            if (s[i] == ')'){
                if (count){
                    count--;
                }else{
                    s[i] = ' ';
                }
            }
        }
        
        for (int i=0; i<s.length(); i++){
            cout << s[i] << " ";
        }
        cout << endl;
        
        if (count){
            for (int i=s.length()-1; i>=0; i--){
                if (s[i] == '('){
                    s[i] = ' ';
                    if (--count == 0){
                        break;
                    }
                }
            }
        }
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        
        return s;
    }
};