#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly
	set<char> red, green;
	string s;
	cin >> s;
	int mxsize = 0;
	map<char, int> cnt;
	for (auto i : s) {
		if (cnt[i] == 2)
			continue;
		else cnt[i]++, mxsize++;
	}
	int each = mxsize / 2;
	for (auto [k, v] : cnt) {
		if (v == 2)
			red.insert(k), green.insert(k);
		else {
			if (red.size() > green.size())
				green.insert(k);
			else red.insert(k);
		}
	}

	while (red.size() != green.size()) {
		if (red.size() > green.size()) {
			auto it = red.begin();
			red.erase(it);
		}
		else {
			auto it = green.begin();
			green.erase(it);
		}
	}

	cout << red.size() << endl;
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