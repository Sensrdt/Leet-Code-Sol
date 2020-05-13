class Solution {
public:
    bool backspaceCompare(string S, string T) {
        
        int n = S.length();
        stack<char> st;
        
        for (auto s : S){
            if (s == '#'){
                if (!st.empty()){
                    st.pop();
                }              
            }else{
                st.push(s);
            }
        }
        
        stack<char> tt;
        
        
        for (auto t : T){
            if (t == '#'){
                if (!tt.empty()){
                    tt.pop();
                }
            }else{
                tt.push(t);
            }
        }
        
        return st == tt;
    }
};
