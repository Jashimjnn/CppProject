#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			bool flag = false;
			if(i % 2 == 1)
	        {
              flag = true;
            }
			else
			{
				if(i % 4 == 2) 
                {
                    flag = (j == m);
                }
				if(i % 4 == 0) 
                {
                    flag = (j == 1);
                }
			}
			cout << (flag ? "#" : ".");
		}
		cout << endl;
	}
    return 0;
}