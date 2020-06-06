class Solution {
public:
    int minSteps(string s, string t) {
        
        map<char, int> fr;
        for (auto a : s){
            fr[a]++;
        }
        
        int count = 0;
        
        for (auto a : t){
            if (fr[a] != 0 and fr.find(a) != fr.end()){
                fr[a]--;
            }else{
                count++;
            }
        }
        
        return count;
    }
};