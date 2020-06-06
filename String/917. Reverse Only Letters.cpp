class Solution {
public:
    string reverseOnlyLetters(string S) {
        int n = S.length();
        int i = 0;
        while(i < n){
            if (!isalpha(S[i])){
                i++;      
            }
            
            if (!isalpha(S[n])){
                n--;
            }
            
            if (isalpha(S[i]) and isalpha(S[n])){
                swap(S[i], S[n]);
                i++;n--;
            }
            
        }
        return S;
    }
};521. Longest Uncommon Subsequence I