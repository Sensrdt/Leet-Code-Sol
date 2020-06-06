class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string map[26] = {".-","-...","-.-.","-..",".","..-.","--.",
                         "....","..",".---","-.-",".-..","--","-.",
                         "---",".--.","--.-",".-.","...","-","..-",
                         "...-",".--","-..-","-.--","--.."};
        
        set<string> s;
        for (auto a : words){
            string ans;
            for (auto b : a){
                ans.append(map[b - 'a']);
            }
            
            s.insert(ans);
        }
        
        return s.size();
    }
};