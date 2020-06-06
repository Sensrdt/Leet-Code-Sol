class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        
        int i=0, j=0;
        
        stack<string> st;
        string ans;
        while(i < n){
            if (s[i] == ' '){
                if (i > j){
                    st.push(s.substr(j, i-j));
                    j = i + 1;   
                }
            }else if (i == n-1){
                st.push(s.substr(j, n-j));
            }
            
            i++;
        }
        
        while(!st.empty()){
            ans += st.top()+" ";
            st.pop();
        }
        
        ans.pop_back();
        
        return ans;
    }
};