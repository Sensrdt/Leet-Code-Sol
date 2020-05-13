class Solution {
public:
    int countElements(vector<int>& arr) {
        
        set<int> s;
        int count = 0;
        for (auto a : arr){
            s.insert(a);
        }
        
        for (auto a : arr){
            if (s.count(a+1) == 1){
                count++;
            }
        }
        
        return count;
    }
};
