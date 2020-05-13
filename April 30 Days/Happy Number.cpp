class Solution {
public:
    
    int calSum(int n)
    {
        int sum = 0;
        int d = 0;
        
        while(n != 0)
        {
            d = n%10;
            n = n/10;
            
            sum += d * d;
            
        }
        
        return sum;
    }
    
    bool isHappy(int n) {
        
        unordered_set<int> s;
        
        while(1)
        {
            n = calSum(n);
            
            if (n == 1){
                return true;
            }
            
            if (s.count(n) == 1){
                return false;
            }
            
            s.insert(n);
        }
    }
};
