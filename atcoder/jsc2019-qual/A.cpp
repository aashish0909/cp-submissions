#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using vll = vector<ll>;
ll const mod = 1e9 + 7;
#define endl "\n"
#define pb push_back
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define f(n) for(ll i=0;i<n;i++)
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define repe(i,a,n) for(ll i=a;i<=n;i++)
#define repr(i,a,n) for(ll i=a;i>=n;i--)
#define ain(arr,n) for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]<<" "
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)


ll testcases;

int main()
{
    aashish_999;
    //READ THE QUESTION PROPERLY!!
    testcases = 1;
    //cin>>testcases;
    while(testcases--)
    {
        ll m, d;
        cin >> m >> d;
        ll cnt = 0;
        for(ll i = 1; i <= m; i++)
        {
            for(ll j = 2; j <= 9; j++)
            {
                if(i % j == 0 && i / j >= 2)
                {
                    if(((i / j) * 10 + j) >= 1 &&  ((i / j) * 10 + j) <= d)
                        cnt++;
                }
            }
        }

        cout << cnt << endl;
    }

}