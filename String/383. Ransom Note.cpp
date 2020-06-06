class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map<char, int> store;
        
        for (auto a : magazine){
            store[a]++;
        }
        
        for (auto a : ransomNote){
            if (store.find(a) != store.end() && store[a] > 0){
                store[a]--;
            }else{
                return false;
            }
        }
        
        return true;        
    }
};