class Solution {
public:
    int romanToInt(string s) {
        int n = s.length();
        int ans =0;
        for (int i=0; i<n; i++)
        {
            int res1 = val(s[i]);
            if (i+1 < n)
            {
                int res2 = val(s[i+1]);
                
                if (res1 < res2)
                {
                   ans += res2 - res1; 
                    i++;
                }else{
                    ans += res1;
                }
            }else{
                ans += res1;
            }   
        }
        
        return ans;
    }
    
    int val (char s)
    {
        if (s == 'I')
        {
            return 1;
        }else if (s == 'V')
        {
            return 5;
        }else if (s == 'X')
        {
            return 10;
        }else if (s == 'L')
        {
            return 50;
        }else if (s == 'C')
        {
            return 100;
        }else if (s == 'D')
        {
            return 500;
        }else if (s == 'M')
        {
             return 1000;
        }
        
        return -1;
    }
};