class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxc = INT_MIN;
        
        for (auto a : candies){
            if (maxc < a){
                maxc = a;
            }
        }
        
        vector<bool> ans;
        
        for (int i=0; i<candies.size(); i++){
            if (candies[i] + extraCandies >= maxc){
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }
        
        return ans;
    }
};