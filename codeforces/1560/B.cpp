#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    //read the question properly

    int a, b, c;
    cin >> a >> b >> c;

    int highest = abs(a - b) * 2;
    if (c > highest || a > highest || b > highest) {
        cout << -1 << endl;
        return;
    }

    int ans1 = c + abs(a - b);
    int ans2 = c - abs(a - b);
    if (ans1 > highest || ans1 < 1)
        cout << ans2 << endl;
    else cout << ans1 << endl;
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