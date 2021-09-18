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
    if (n >= 90)
        cout << "expert";
    else {
        if (n >= 70 && n < 90)
            cout << 90 - n;
        else if (n >= 40 && n < 70) cout << 70 - n;
        else cout << 40 - n;
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