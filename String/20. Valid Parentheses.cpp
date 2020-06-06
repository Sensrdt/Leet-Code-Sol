class Solution {
public:
    bool isValid(string s) {
        
        stack<char> st;
        
        for (auto a : s){
            if(a == '(' or a == '{' or a == '['){
                st.push(a);
            }else{
                if (st.size() == 0){
                    return false;
                }
                char tp = st.top();
                if (tp == '('){
                    if (a == ')'){
                        st.pop();
                    }
                }else if (tp == '{'){
                    if (a == '}'){
                        st.pop();
                    }
                }else{
                    if (a == ']'){
                        st.pop();
                    }
                }
            }
        }
        
        if (st.size() == 0){
            return true;
        }
        
        return false;
    }
};