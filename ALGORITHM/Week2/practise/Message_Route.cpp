#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const int X = 1e6 + 5;
vector<int> v[X];
bool vis[X];
int level[X];
int parent[X];
void bfs(int src)
{
	queue<int> q;
	q.push(src);
	vis[src] = true;
	level[src] = 0;
	while (!q.empty())
	{
		int pr = q.front();
		q.pop();
		for (int child : v[pr])
		{
			if (vis[child] == false)
			{
				q.push(child);
				vis[child] = true;
				level[child] = level[pr] + 1;
				parent[child] = pr;
			}
		}
	}
}
int main()
{
	int n, e;
	cin >> n >> e;
	while (e--)
	{
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	memset(vis, false, sizeof(vis));
	memset(level, -1, sizeof(level));
	memset(parent, -1, sizeof(parent));
	bfs(1);
	int x = n;
	vector<int> v1;
	while (x != -1)
	{
		v1.push_back(x);
		x = parent[x];
	}
	reverse(v1.begin(), v1.end());
	if (v1.size() == 1)
	{
		cout << "IMPOSSIBLE" << endl;
	}
	else
	{
		cout << v1.size() << endl;
		for (auto va : v1)
		{
			cout << va << " ";
		}
	}
	return 0;
}
