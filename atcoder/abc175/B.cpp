#include <bits/stdc++.h>
using namespace std;

#define f(a,n) for(ll i=a;i<n;i++)
#define fe(a,n) for(ll i=a;i<=n;i++)
#define ain(arr,n) for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]
#define ll long long int
#define endl "\n"
#define space " "
#define TLE_na_ho ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX_SIZE 400

int main()
{
    TLE_na_ho;

    ll n;
    cin >> n;
    ll a[n];
    ain(a, n);
    ll count = 0;
    sort(a, a + n);
    f(0, n - 2)
    {
        for(ll j = i + 1; j < n-1; j++)
        {
            for (ll k = j + 1; k < n; k++) 
                if ( 
                    a[i] + a[j] > a[k] 
                    && a[i] + a[k] > a[j] 
                    && a[k] + a[j] > a[i] && a[i]!=a[j] && a[j]!=a[k] && a[i]!=a[k]) 
                    count++; 


        }
    }
    cout << count;
}
