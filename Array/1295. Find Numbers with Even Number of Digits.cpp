class Solution {
public:
    int findNumbers(vector<int>& a) {
        int n = a.size();
        int global_count = 0;
        for (int i=0; i<n; i++)
        {
            
        int count = 0;
            int num = a[i];
            while(num)
            {
               count++;
               num = num/10;
            }
            
            if (count%2 == 0) global_count++;
        }
        
        return global_count;
    }
};