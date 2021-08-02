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
	vector<int> a(n);
	for (auto &i : a) cin >> i;
	int mx = 0;
	multiset<int> ms;
	set<int> s;
	for (int i = 0; i < k; i++)
		s.insert(a[i]), ms.insert(a[i]);
	mx = s.size();
	for (int i = k; i < n; i++) {
		auto it = ms.find(a[i - k]);
		ms.erase(it);
		if (ms.find(a[i - k]) == ms.end())
			s.erase(a[i - k]);
		s.insert(a[i]);
		ms.insert(a[i]);
		mx = max(mx, (int)s.size());
	}

	cout << mx << endl;
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