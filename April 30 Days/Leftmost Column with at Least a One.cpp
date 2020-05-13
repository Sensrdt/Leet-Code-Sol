/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int row, int col);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        
        
        // Perform Binary search in every row
        
        vector<int> dimen = binaryMatrix.dimensions();
        
        int ans = -1;
        int x = dimen[0] - 1;
        cout << x << endl;
        int y = dimen[1] - 1;
        cout << y << endl;
        
        while(x >=0 && y >= 0)
        {
            if (binaryMatrix.get(x, y) == 1)
            {
                ans = y;
                y -= 1;
            }else{
                x -= 1;
            }
        }
        
        
        return ans;
        
    }
};
