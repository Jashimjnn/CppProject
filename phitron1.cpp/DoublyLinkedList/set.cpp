#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int q;
    cin >> q;

    set<int> s;

    while (q--)
    {
        int y, x;
        cin >> y >>x;

        if (y == 1)
        {

            s.insert(x);
        }
        else if (y == 2)
        {

            s.erase(x);
        }
        else if (y == 3)
        {

            set<int>::iterator it = s.find(x);
            if (it != s.end())
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}
