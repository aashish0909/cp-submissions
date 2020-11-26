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
        ll n, k;
        cin >> n >> k;
        ll a[n];
        ain(a, n);
        vector<double> sum(n);
        f(n)
        {
            sum[i] = (double)((a[i] * (a[i] + 1)) / 2) / (a[i]);
        }

        //aout(sum,n);
        double mx = 0, temp = 0;
        f(k)
        temp += sum[i];
        mx = temp;
        ll itr = k;
        rep(itr, k, n)
        {
            temp = temp + sum[itr] - sum[itr - k];
            mx = max(mx, temp);
        }

        cout << fixed << setprecision(10) << mx;
    }

}