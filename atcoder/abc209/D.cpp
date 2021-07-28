#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly

	int n, queries;
	cin >> n >> queries;
	vector<int> adj[n + 1], visited(n + 1, 0), level(n + 1, 0);

	for (int i = 0; i < n - 1; i++) {
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	queue<int> q;
	q.push(1);

	while (!q.empty()) {

		int curr = q.front();
		q.pop();
		visited[curr] = 1;

		for (auto i : adj[curr]) {
			if (!visited[i]) {
				q.push(i);
				level[i] = level[curr] + 1;
			}
		}
	}

	while (queries--) {
		int a, b;
		cin >> a >> b;
		if (level[a] % 2 != level[b] % 2)
			cout << "Road" << endl;
		else cout << "Town" << endl;
	}
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