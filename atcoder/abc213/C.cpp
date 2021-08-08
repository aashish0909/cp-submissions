#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    //read the question properly
    int h,w,n;
    cin>>h>>w>>n;
    vector<pair<int,int>> a(n);
    for(auto &i : a) cin>>i.first>>i.second;
    set<int> dis;
    map<int,int> r,c;
    for(auto i : a) dis.insert(i.second);
    int col=dis.size();
    int it=0;
    for(auto i : dis)
        c[i]=it++;
    dis.clear();
    it=0;
    for(auto i : a) dis.insert(i.first);
        for(auto i : dis) r[i]=it++;
    int row=dis.size();

    for(int i=0;i<n;i++){
        cout<<r[a[i].first]+1<<' '<<c[a[i].second]+1<<endl;
    }

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