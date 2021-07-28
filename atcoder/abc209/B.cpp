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
	int sum = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		sum += x;
		if (i & 1) sum--;
	}
	if (k >= sum)
		cout << "Yes";
	else cout << "No";
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