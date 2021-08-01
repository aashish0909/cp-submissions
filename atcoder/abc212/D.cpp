#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly

	int n;
	cin >> n;
	multiset<int> s;
	int toAdd = 0;
	while (n--) {
		int type, add;
		cin >> type;
		if (type == 3) {
			auto it = s.begin();
			s.erase(it);
			cout << *it + toAdd << endl;
			continue;
		}
		cin >> add;
		if (type == 1)
			s.insert(add - toAdd);
		else {
			toAdd += add;
		}
	}
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