#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

vector<int> liked;

void solve()
{
    //read the question properly

    int n;
    cin >> n;
    cout << liked[n - 1] << endl;
}

int32_t main()
{
    aashish_999;

    for (int i = 1; i <= 100000; i++) {
        if (i % 3 == 0)
            continue;
        if (i % 10 == 3) continue;
        liked.push_back(i);
    }

    int testcases = 1;
    cin >> testcases;
    while (testcases--)
    {
        solve();
    }
}