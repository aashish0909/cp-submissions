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
	int each = n / 3;
	int two = each;
	int one = n - 2 * two;
	if (abs(one - 2 - two - 1) < abs(one - two))
		one -= 2, two++;
	cout << one << ' ' << two << endl;

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