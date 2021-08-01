#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly

	int n, m;
	cin >> n >> m;
	vector<int> a(n), b(m);
	for (auto &i : a) cin >> i;
	for (auto &i : b) cin >> i;

	int minDiff = 1e18 + 1;
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	int i = 0, j = 0;
	while (i < n && j < m) {
		minDiff = min(minDiff, abs(a[i] - b[j]));
		if (a[i] > b[j]) ++j;
		else ++i;
	}

	cout << minDiff;
}

int32_t main()
{
	aashish_999;

	int testcases = 1;
	//cin >> testcases;
	while (testcases--)
	{
		solve();
	}
}