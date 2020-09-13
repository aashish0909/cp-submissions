#include <bits/stdc++.h>
using namespace std;

using ll =                   long long int;
using pll =                  pair<ll, ll>;
#define endl                 "\n"
#define space                " "
#define TLE_na_ho            ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX_SIZE             1024
#define MOD                  1000000007
#define pb                   push_back
#define fi                   first
#define se                   second
#define rep(i,a,n)           for(ll i=a;i<n;i++)
#define repe(i,a,n)          for(ll i=a;i<=n;i++)
#define repr(i,a,n)          for(ll i=a;i>=n;i--)
#define ain(arr,n)           for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n)          for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]<<space

bool comp(ll a,ll b)
{
	return (a<b);
}

int main()
{
    TLE_na_ho;
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll p1=a*c;
    ll p2=a*d;
    ll p3=b*c;
    ll p4=b*d;
    ll maaxi=max({p1,p2,p3,p4},comp);
    cout<<maaxi;
}
