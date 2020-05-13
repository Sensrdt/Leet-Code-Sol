class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinate) {
        
        double check = 5040;
        
        for (int i=0; i<coordinate.size() - 1; i++){
            double frx = coordinate[i+1][0] - coordinate[i][0];
            double fry = coordinate[i+1][1] - coordinate[i][1];
            
            double slp = (double) (fry / frx);
            
            if (check == 5040) {
                check = slp;
            }else if (check != slp){
                return false;
            }
        }
        return true;   
    }
};