#include <bits/stdc++.h>
using namespace std;

using   ll        = long long int;
using   pll       = pair<ll, ll>;
using   vll       = vector<ll>;
ll const max_size = 1024;
ll const mod      = 1e9 + 7;
ll const maxn     = 1e5 + 1;
#define endl        "\n"
#define ssp         " "
#define n_l         cout<<"\n"
#define TLE_na_ho   ios_base::sync_with_stdio(false);cin.tie(NULL)
#define pb          push_back
#define ff          first
#define ss          second
#define all(v)      v.begin(),v.end()
#define f(n)        for(ll i=0;i<n;i++)
#define rep(i,a,n)  for(ll i=a;i<n;i++)
#define repe(i,a,n) for(ll i=a;i<=n;i++)
#define repr(i,a,n) for(ll i=a;i>=n;i--)
#define ain(arr,n)  for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]<<ssp

/*
░█▀▀▄ ░█▀▀▀ ░█▀▀█ ░█─░█ ░█▀▀█
░█─░█ ░█▀▀▀ ░█▀▀▄ ░█─░█ ░█─▄▄
░█▄▄▀ ░█▄▄▄ ░█▄▄█ ─▀▄▄▀ ░█▄▄█*/
void __print(int x)
{
    cerr << x;
}
void __print(long x)
{
    cerr << x;
}
void __print(long long x)
{
    cerr << x;
}
void __print(unsigned x)
{
    cerr << x;
}
void __print(unsigned long x)
{
    cerr << x;
}
void __print(unsigned long long x)
{
    cerr << x;
}
void __print(float x)
{
    cerr << x;
}
void __print(double x)
{
    cerr << x;
}
void __print(long double x)
{
    cerr << x;
}
void __print(char x)
{
    cerr << '\'' << x << '\'';
}
void __print(const char *x)
{
    cerr << '\"' << x << '\"';
}
void __print(const string &x)
{
    cerr << '\"' << x << '\"';
}
void __print(bool x)
{
    cerr << (x ? "true" : "false");
}

template<typename T, typename V>
void __print(const pair<T, V> &x)
{
    cerr << '{';
    __print(x.first);
    cerr << ',';
    __print(x.second);
    cerr << '}';
}
template<typename T>
void __print(const T &x)
{
    int f = 0;
    cerr << '{';
    for (auto &i : x) cerr << (f++ ? "," : ""), __print(i);
    cerr << "}";
}
void _print()
{
    cerr << "]\n";
}
template <typename T, typename... V>
void _print(T t, V... v)
{
    __print(t);
    if (sizeof...(v)) cerr << ", ";
    _print(v...);
}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
/*
░█▀▀▄ ░█▀▀▀ ░█▀▀█ ░█─░█ ░█▀▀█
░█─░█ ░█▀▀▀ ░█▀▀▄ ░█─░█ ░█─▄▄
░█▄▄▀ ░█▄▄▄ ░█▄▄█ ─▀▄▄▀ ░█▄▄█*/


ll testcases;

int main()
{
    TLE_na_ho;
    //READ THE QUESTION PROPERLY!!
    testcases = 1;
    //cin>>testcases;
    while(testcases--)
    {
        ll n, kr;
        cin >> n >> kr;
        ll a[n][n];
        f(n)
        rep(j, 0, n)
        cin >> a[i][j];

        bool sel[n];
        ll ans = 0;
        int cnt = 0;
        memset(sel, 0, sizeof(sel));
        rep(i, 1, n)
        {
            sel[0] = 1;

            if(n >= 3)
            {
                sel[i] = 1;
                rep(j, 1, n)
                {
                    if(j == i)
                        continue;

                    if(n >= 4)
                    {
                        sel[j] = 1;
                        rep(k, 1, n)
                        {
                            if(k == j || k == i)
                                continue;

                            if(n >= 5)
                            {
                                sel[k] = 1;
                                rep(l, 1, n)
                                {
                                    if(l == k || l == j || l == i)
                                        continue;

                                    if(n >= 6)
                                    {
                                        sel[l] = 1;
                                        rep(m, 1, n)
                                        {
                                            if(m == l || m == k || m == j || m == i)
                                                continue;

                                            if(n >= 7)
                                            {
                                                sel[m] = 1;
                                                rep(o, 1, n)
                                                {
                                                    if(o == m || o == l || o == k || o == j || o == i)
                                                        continue;

                                                    if(n == 8)
                                                    {
                                                        sel[o] = 1;
                                                        rep(r, 1, n)
                                                        {
                                                            if(r == o || r == m || r == l || r == k || r == j || r == i)
                                                                continue;

                                                            if(a[0][i] + a[i][j] + a[j][k] + a[k][l] + a[l][m] + a[m][o] + a[o][r] + a[r][0] == kr)
                                                                cnt++;
                                                        }
                                                    }
                                                    else
                                                    {
                                                        if(a[0][i] + a[i][j] + a[j][k] + a[k][l] + a[l][m] + a[m][o] + a[o][0] == kr)
                                                            cnt++;
                                                    }
                                                }
                                            }

                                            else
                                            {
                                                if(a[0][i] + a[i][j] + a[j][k] + a[k][l] + a[l][m] + a[m][0] == kr)
                                                    cnt++;
                                            }
                                        }
                                    }
                                    else
                                    {
                                        if(a[0][i] + a[i][j] + a[j][k] + a[k][l] +  a[l][0] == kr)
                                            cnt++;

                                    }
                                }
                            }
                            else
                            {
                                debug(a[0][i] + a[i][j] + a[j][k] + a[k][0]);
                                if(a[0][i] + a[i][j] + a[j][k] + a[k][0] == kr)
                                    cnt++;
                            }
                        }
                    }
                    else
                    {
                        if(a[0][i] + a[i][j] + a[j][0] == kr)
                            cnt++;
                    }
                }
            }
            else
            {
                if(a[0][i] + a[i][0] == kr)
                    cnt++;
            }
        }
        cout << cnt;

    }

}