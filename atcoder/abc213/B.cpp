#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    //read the question properly
    int n;
    cin>>n;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first;
        a[i].second=i;
    }

    sort(a.begin(),a.end());
    cout<<a[n-2].second+1;
}

int32_t main()
{
    aashish_999;

    int testcases = 1;
    //cin >> testcases;
    while(testcases--)
    {
        solve();
    }
}