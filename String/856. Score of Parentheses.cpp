class Solution {
public:
    int scoreOfParentheses(string S) {
        
        stack<int> s;
        int count = 0;
        
        for (auto a : S){
            if (a == '('){
                s.push(count);
                count = 0;
            }else{
                count = s.top() + max(count*2, 1);
                s.pop();
            }
        }
        
        return count;
        
    }
};