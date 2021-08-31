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

    int low = sqrt(n);
    int high = ceil((double)sqrt(n));

    // cout << low << ' ' << high << endl;

    if (low == high) {
        cout << low << ' ' << 1 << endl;
        return;
    }

    int mid = low * low + high;
    // cout << mid << endl;
    if (n == mid) {
        cout << high << ' ' << high << endl;
        return;
    }
    if (n < mid) {
        int curr = low * low + 1;
        cout << n - curr + 1 << ' ' << high << endl;
    }
    else {
        int curr = high * high;
        cout << high << ' ' << curr - n + 1 << endl;
    }
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