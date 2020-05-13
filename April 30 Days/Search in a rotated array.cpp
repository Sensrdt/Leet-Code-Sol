class Solution {
public:
    int search(vector<int>& a, int target) {
        
        int n = a.size();
        
        int start = 0, end = n - 1 ;
        
        if (n == 0)
            return -1;
        
        while(start <= end)
        {
            int mid = (start + end) / 2;
            
            if (a[mid] == target)
                return mid;
            
            if (a[start] <= a[mid]){
                
                if (target < a[mid] and target >= a[start])
                    end = mid-1;
                else
                    start = mid + 1;
            }else{
                
                if (target >= a[mid] and target <= a[end])
                    start = mid + 1;
                else
                    end = mid - 1;    
            }
            
        }
        cout << "last";
        return -1;
    }
};
