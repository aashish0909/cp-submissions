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
    vector<pair<string, string>> a(n);
    for (auto &i : a) cin >> i.first >> i.second;
    sort(a.begin(), a.end());
    for (int i = 1; i < n; i++) {
        if (a[i].first == a[i - 1].first && a[i].second == a[i - 1].second) {
            cout << "Yes";
            return;
        }
    }

    cout << "No";
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