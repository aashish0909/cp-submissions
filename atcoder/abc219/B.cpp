#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    //read the question properly
    string a[3];
    cin >> a[0] >> a[1] >> a[2];
    string t;
    cin >> t;
    string ans = "";
    for (auto i : t)
        ans += a[i - '0' - 1];
    cout << ans << endl;
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