#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

const int N = 200000;

vector<int> adj[N + 1];
// vector<int> visited(N + 1, 0);

void dfs(int root, int par = 1) {
    cout << root << ' ';
    // visited[root] = 1;
    for (auto child : adj[root]) {
        if (child != par) {
            dfs(child, root);
            cout << root << ' ';
        }
    }
}

void solve()
{
    //read the question properly

    int n;
    cin >> n;
    // for (int i = 1; i <= n; i++) adj[i].clear(), visited[i] = 0;
    for (int i = 0; i < n - 1; i++) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for (int i = 1; i <= n; i++) sort(adj[i].begin(), adj[i].end());
    dfs(1, 0);
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