class Solution {
public:
vector<vector<int>> fourSum(vector<int>& nums, int target) {
  sort(nums.begin(),nums.end());
  vector<vector<int>> solution;
  vector<int> tmp;
  if(nums.size()<=3){
    return solution;
  }
  for(int i = 0;i < nums.size()-3;){
      int num1 = nums[i];
      int othersum = target - num1;
      tmp.clear();
      int start = i+1;
      tmp.insert(tmp.end(),nums.begin()+start,nums.end());
      vector<vector<int>> othervector = threeSum(tmp,othersum);
      if(othervector.size()!=0){
            for(int j = 0;j < othervector.size();j++){
                vector<int> curr = othervector[j];
                if(curr.size()==3){
                    vector<int> ssolution;
                    ssolution.push_back(num1);
                    ssolution.insert(ssolution.end(),curr.begin(),curr.end());
                    solution.push_back(ssolution);
                }
            }
      }
      i++;
      while (i< nums.size()-3 && nums[i] == nums[i-1]) 
        i++;
  }
  return solution;
}
vector<vector<int>> threeSum(vector<int>& nums,int target) {
    vector<vector<int>> solution;
    vector<int> t(3);
    int j = 0;
    int k = nums.size()-1;
    int i = 0;
    for(i = 0;i < k-1;){
        for(j = i+1,k = nums.size()-1;j < k;){
            if(nums[i]+nums[j]+nums[k]<target){
                j++;
            }else if(nums[i]+nums[j]+nums[k]>target){
                k--;
            }else{
                t[0] = nums[i];
                t[1] = nums[j];
                t[2] = nums[k];
                solution.push_back(t);
                j++;
                k--;
                while (j < k && nums[j] == nums[j-1]) j++;  
                while (j < k && nums[k] == nums[k+1]) k--; 
            }
        }
        i++;
        while (i< k-1 && nums[i] == nums[i-1]) 
            i++;
    }
    return solution;
}
};