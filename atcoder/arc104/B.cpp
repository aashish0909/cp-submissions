#include <bits/stdc++.h>
using namespace std;

using   ll  =       long long int;
using   pll =       pair<ll, ll>;
using   vll =       vector<ll>;
#define endl        "\n"
#define space       " "
#define TLE_na_ho   ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX_SIZE    1024
#define MOD         1000000007
#define pb          push_back
#define fi          first
#define se          second
#define all(v)      v.begin(),v.end()
#define f(n)        for(ll i=0;i<n;i++)
#define rep(i,a,n)  for(ll i=a;i<n;i++)
#define repe(i,a,n) for(ll i=a;i<=n;i++)
#define repr(i,a,n) for(ll i=a;i>=n;i--)
#define ain(arr,n)  for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]<<space

ll testcases;

int fact(int n);

int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

// Returns factorial of n
int fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
int main()
{
    TLE_na_ho;
    //READ THE QUESTION PROPERLY!!
    testcases = 1;
    //cin>>testcases;

    ll n;
    cin >> n;
    char s[n];
    ain(s, n);
    ll ans = 0, cont1 = 0, cont2 = 0;
    rep(i, 0, n - 1)
    {
        if(s[i] == 'A')
        {
            if(s[i + 1] == 'T')
            {
                ans++;
            }
        }
        else if(s[i] == 'T')
        {
            if(s[i + 1] == 'A')
            {
                ans++;
            }
        }
        else if(s[i] == 'C')
        {

            if(s[i + 1] == 'G')
            {
                ans++;
            }
        }
        else if(s[i] == 'G')
        {

            if(s[i + 1] == 'C')
            {
                ans++;
            }
        }
    }
    for(ll i = 1; i < n; i++)
    {
        if(s[i] == 'A')
        {
            if(s[i - 1] == 'T')
            {
                cont1++;
                i++;
            }
        }
        if(s[i] == 'T')
        {
            if(s[i - 1] == 'A')
            {
                cont1++;
                i++;
            }
        }
        if(s[i] == 'C')
        {
            if(s[i - 1] == 'G')
            {
                cont2++;
                i++;
            }
        }
        if(s[i] == 'G')
        {
            if(s[i - 1] == 'C')
            {
                cont2++;
                i++;
            }
        }
    }
    ll ans2 = 0;
    map<ll, ll>cnt;
    rep(i, 0, n)
    {
        //cout << "##" << i << space << cnt[0] << space << cnt[19] << space << cnt[2] << space << cnt[6] << endl;
    	if(cnt[0] == cnt[19] && cnt[2] == cnt[6])
            {
                if(cnt[0] + cnt[2] >= 2)
                    ans2++;
            }
        cnt.clear();
        rep(j, i, n)
        {
            if(cnt[0] == cnt[19] && cnt[2] == cnt[6])
            {
                if(cnt[0] + cnt[2] >= 2)
                    ans2++;
            }
            cnt[s[j] - 'A']++;
        }
    }

    cout << ans + ans2;

}
