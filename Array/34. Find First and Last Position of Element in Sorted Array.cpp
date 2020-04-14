class Solution {
public:
    
    vector<int> searchRange(vector<int>& nums, int x) {

        int n = nums.size();
        vector<int> ans(2, -1);
        int f = first(nums, 0, n-1, x, n);
        int l = last(nums, 0, n-1, x, n);
            
        ans[0] = f;
        ans[1] = l;
        
        return ans;
    }
    
    int first(vector<int> arr, int low, int high, int x, int n)
    {
            if(high >= low) 
            { 
                int mid = low + (high - low)/2; 
                if( ( mid == 0 || x > arr[mid-1]) && arr[mid] == x) 
                    return mid; 
                else if(x > arr[mid]) 
                    return first(arr, (mid + 1), high, x, n); 
                else
                    return first(arr, low, (mid -1), x, n); 
            } 
        return -1; 
    }
    
    int last(vector<int>arr, int low, int high, int x, int n)
    {
            if (high >= low) 
            { 
                int mid = low + (high - low)/2; 
                if (( mid == n-1 || x < arr[mid+1]) && arr[mid] == x) 
                    return mid; 
                else if (x < arr[mid]) 
                    return last(arr, low, (mid -1), x, n); 
                else
                    return last(arr, (mid + 1), high, x, n); 
            } 
        return -1; 
    }
        
};

/*
    0, 1, 2, 3, 4, 5
    5, 7, 7, 8, 8, 10
    
*/