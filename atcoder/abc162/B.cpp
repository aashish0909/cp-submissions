#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

int sum(int n) {
    return n * (n + 1) / 2;
}

void solve()
{
    //read the question properly

    int n;
    cin >> n;

    cout << sum(n) - sum(n / 3) * 3 - sum(n / 5) * 5 + sum(n / 15) * 15;
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