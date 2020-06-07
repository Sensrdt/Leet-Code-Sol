class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        bool in = true;
        bool de = true;
        
        for(int i=0; i<A.size()-1; i++){
            if (A[i] > A[i+1])
                in = false;
            if (A[i] < A[i+1])
                de = false;
        }
        
        return in || de;
    }
};