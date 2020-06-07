class Solution {
public:
   vector<vector<int>> ans;
	void dfs(vector<int>& path, int idx, int cur, int tol, int n, int k)
	{
		if(tol==n && idx==k)
		{
			ans.push_back(path);
		}

		if(tol>n || idx>=k) return;

		for(int i=cur;i<=9;i++)
		{
			path.push_back(i);
			dfs(path, idx+1, i+1, tol+i,n,k);
			path.pop_back();
		}
	}
	vector<vector<int>> combinationSum3(int k, int n) {
		vector<int> path;
		dfs(path,0,1,0,n,k);
		return ans;
	}
};