#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly
	bool a = true;
	int n;
	cin >> n;
	string s;
	cin >> s;
	for (auto i : s) {
		if (i == '1')
		{
			cout << (a ? "Takahashi" : "Aoki");
			return;
		}
		a = !a;
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