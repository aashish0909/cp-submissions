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
    bool f = false;
    while (n > 0) {
        if (n % 10 == 7)
            f = true;
        n /= 10;
    }

    if (f) cout << "Yes";
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