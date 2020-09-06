#include <bits/stdc++.h>
#define int long long int
#define P pair<int, int>
#define f first
#define s second
#define endl '\n'
using namespace std;
map<int, int> dp;
int solve(int n)
{	
	if (dp.find(n) != dp.end())
		return dp[n];
	if (n <= 1)
		return 0;

	int temp = n; 
	int a = 0, b = 0;
	while (temp > 2 && temp % 2 != 0)
		a++, temp--;
	a += 1 + solve(temp/2);
	temp = n;
	while (temp > 3 && temp % 3 != 0)
		b++, temp--;
	b += 1 + solve(temp/3);
	
	dp[n] = min(a, b);
	return dp[n];
}
int32_t main()
{
	int t;
	cin >> t;
	dp[1] = 0;
	while (t--)
	{
		int n;
		cin >> n;
		cout << solve(n)<< endl;
	}
}