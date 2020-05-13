class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        
        int n = num.size();
        
        for (auto a : num){
            while(st.empty() == false && st.top() > a && k>0){
                st.pop();
                k--;
            }
            
            if (st.empty() == false || a != '0'){
                st.push(a);
            }
        }
        
        while(st.empty() == false && k){
            st.pop();
            k--;
        }
        
        if (st.empty()){
            return "0";
        }
        
        while(st.empty() == false){
            num[n-1] = st.top();
            st.pop();
            n--;
        }
        
        return num.substr(n);
    }
};