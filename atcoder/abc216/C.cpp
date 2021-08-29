#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    //read the question properly

    int n;
    vector<char>operation;
    cin >> n;

    while (n > 0) {
        if (n % 2 == 0) {
            n /= 2;
            operation.push_back('B');
        }
        else {
            n--;
            operation.push_back('A');
        }
    }

    reverse(operation.begin(), operation.end());
    for (auto i : operation) cout << i;
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