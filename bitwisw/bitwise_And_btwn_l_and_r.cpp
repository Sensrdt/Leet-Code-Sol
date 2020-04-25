//first approach
int n, m;
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
int n, m;

int count = 0;

while(n != m)
{
	n >> = 1;
	m >> = 1;
	count++;
}

return m << count;
