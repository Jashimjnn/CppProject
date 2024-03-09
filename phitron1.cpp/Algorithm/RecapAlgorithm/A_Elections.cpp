#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int fun(int a, int b, int c)
{
	return max(0, max(b, c) + 1 - a);
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int a, b, c;
		cin >> a >> b >> c;

		cout << fun(a, b, c) << " " << fun(b, a, c) << " " << fun(c, a, b) <<endl;
	}

	return 0;
}