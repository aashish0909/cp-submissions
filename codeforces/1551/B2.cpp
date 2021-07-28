#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly
	int n, k;
	cin >> n >> k;
	vector<int> a(n), ans(n, 0);
	for (auto &i : a) cin >> i;

	map<int, vector<int>> cnt;

	for (int i = 0; i < n; i++) {
		if (cnt[a[i]].size() < k) {
			cnt[a[i]].push_back(i);
		}
	}

	int each = 0;
	for (auto i : cnt) each += i.second.size();
	each -= each % k;

	int color = 0;

	for (auto i : cnt) {
		for (auto j : i.second) {
			ans[j] = ++color;
			color %= k;
			--each;
			if (each == 0)
				break;
		}
		if (each == 0)
			break;
	}

	for (auto i : ans) cout << i << ' ';
	cout << endl;
}

int32_t main()
{
	aashish_999;

	int testcases = 1;
	cin >> testcases;
	while (testcases--)
	{
		solve();
	}
}