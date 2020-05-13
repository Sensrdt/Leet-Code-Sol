class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {        
        int n = a.size();
        
        vector<int> b;
        int pro = 1;
        
        for (int i=0; i<n; i++)
        {
            pro *= a[i];
            b.push_back(pro);
        }
        
        pro = 1;
        for (int i=n-1; i>0; i--)
        {
            b[i] = b[i-1] * pro;
            pro *= a[i];
        }
        
        b[0] = pro;
        
        return b;
    }
};
