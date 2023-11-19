#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
	cin >> q;
	for (int i = 0; i < q; i++)
    {
		int c, m, x;
		cin >> c >> m >> x;
		int lft = 0, rht = min(c, m);
		int ans = 0;
		while (lft <= rht)
        {
			int mid = (lft + rht) / 2;
			if (c+m-mid >= mid)
            {
				lft = mid + 1;
				ans = mid;
			}
			else
            {
				rht = mid - 1;
			}
		}
		cout << ans << endl;
	}
}