#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

int choose(int n) {
    return n * (n - 1) / 2;
}

void solve()
{
    //read the question properly

    int n, m;
    cin >> n >> m;

    cout << choose(n) + choose(m);
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