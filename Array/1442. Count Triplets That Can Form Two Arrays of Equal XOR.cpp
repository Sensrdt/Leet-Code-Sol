class Solution {
public:
    int countTriplets(vector<int>& arr) {
        
        int n = arr.size();    
        
        int ans = 0;
        
        vector<int> xors(n + 1);
        
        for (int i = 0; i < n; ++i)
          xors[i + 1] = xors[i] ^ arr[i];
        
        for (int i = 0; i < n; ++i)
          for (int j = i + 1; j < n; ++j)
            for (int k = j; k < n; ++k) {
              const int a = xors[j] ^ xors[i];
              const int b = xors[k + 1] ^ xors[j];         
              if (a == b) ++ans;
            }
        
        return ans;
    }
};