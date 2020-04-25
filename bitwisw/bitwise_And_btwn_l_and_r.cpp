//first approach
int n, int m;
int ans = m+1;

for (int i=m; i<=n; i++)
{
	ans = ans & i;
	if (ans == 0)
		return 0;
	if (i == INT_MAX)
		return ans;
}

return ans;

// Second approach

