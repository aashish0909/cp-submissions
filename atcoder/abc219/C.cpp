#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

map<int, int> mp;
bool comp(const string &a, const string &b) {
    for (int i = 0; i < min(a.length(), b.length()); i++) {
        if (a[i] == b[i]) continue;
        else if (mp[a[i]] < mp[b[i]])
            return true;
        else
            return false;
    }

    return (a.size() < b.size());
}

void solve()
{
    //read the question properly

    string s;
    cin >> s;
    int n;
    cin >> n;
    string a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < s.length(); i++) {
        mp[s[i]] = i;
    }

    sort(a, a + n, comp);

    for (int i = 0; i < n; i++) cout << a[i] << endl;
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