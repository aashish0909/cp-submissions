#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly
	string s;
	cin >> s;
	bool f = false;
	for (int i = 0; i < s.length() - 1; i++)
		if (s[i] != s[i + 1]) {
			f = true;
			break;
		}
	if (!f) {
		cout << "Weak";
		return;
	}
	f = false;
	for (int i = 0; i < s.length() - 1; i++) {
		int a = s[i] - '0';
		int b = s[i + 1] - '0';
		// cout << a << " " << b << endl;
		if (a == 9 && b == 0)
			continue;
		if (b != (a + 1)) {
			f = true;
			break;
		}
	}

	cout << (f ? "Strong" : "Weak");
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