#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

vector<string> two;

void solve()
{
    //read the question properly

    string s;
    cin >> s;

    int ans = 1e18;

    for (auto i : two) {

        int temp = 0;
        int j = 0, k = 0, same = 0;
        while (j < i.size() && k < s.size()) {
            if (i[j] == s[k])
                ++j, ++same;
            ++k;
        }

        temp = s.size() + i.size() - 2 * same;

        ans = min(ans, temp);
    }

    cout << ans << endl;
}

int32_t main()
{
    aashish_999;

    int highestPower = (int)pow(2, 60);
    // cout << highestPower << endl;
    for (int i = 1; i <= highestPower; i *= 2) {
        string st = to_string(i);
        // cout << st << ' ';
        two.push_back(st);
    }

    int testcases = 1;
    cin >> testcases;
    while (testcases--)
    {
        solve();
    }
}