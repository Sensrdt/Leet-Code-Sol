class Solution {
public:
    bool canReorderDoubled(vector<int>& A) {
        
        map<int, int> m;
        
        for (auto a : A){
            m[abs(a)]++;
        }
        
        for (auto &p : m){
            int x = p.first;
            if (m[x]){
                if (m[2*x] < m[x]){
                    return false;
                }
                m[2*x] -= m[x];
            }
        }
        return true;
    }
};