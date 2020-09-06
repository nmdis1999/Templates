//Minmum window containing all characters of string/array
//https://codeforces.com/contest/1354/problem/B
//https://codeforces.com/problemset/problem/701/C
#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	map<char, int> m;
	set<char> st;
	for (auto c : s)
		st.insert(c);
	int l = 0, ans =1e9;
	for (int r = 0; r < n; r++)
	{
		m[s[r]]++;
		while (m[s[l]] > 1)
		{
			m[s[l]]--;
			l++;
		}
		if (m.size() == st.size())
		{
			ans = min(ans, r - l + 1);
		}
	}

	if (asn > 1e7)
		cout << 0 << endl;
	else
		cout << ans << endl;
}
