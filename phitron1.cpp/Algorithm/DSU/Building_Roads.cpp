#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
vector<int> v[100005];
bool vis[100005];

void dfs(int node)
{
	vis[node] = true;

	for (int child : v[node])
	{
		if (vis[child] == 0)
		{
			dfs(child);
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
	vector<int> v1;
	for (int i = 1; i <= n; i++)
	{
		if (vis[i] == false)
		{
			dfs(i);
			v1.push_back(i);
		}
	}

	cout << v1.size() - 1 << endl;
	for (int i = 1; i < v1.size(); i++)
	{
		cout << v1[i - 1] << " " << v1[i] << endl;
	}
}
