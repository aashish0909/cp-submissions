#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    //read the question properly
    int x, y;
    char a;
    cin >> x >> a >> y;
    if (y <= 2)
        cout << x << '-';
    else if (y >= 3 && y <= 6)
        cout << x;
    else cout << x << '+';
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