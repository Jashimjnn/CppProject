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

    map<string, int> StMarks;

    while (q--)
    {
        int type;
        cin >> type;

        if (type == 1)
        {

            string x;
            int y;
            cin >> x >> y;
            StMarks[x] += y;
        }
        else if (type == 2)
        {

            string x;
            cin >> x;
            StMarks.erase(x);
        }
        else if (type == 3)
        {

            string x;
            cin >> x;
            map<string, int>::iterator it = StMarks.find(x);
            if (it != StMarks.end())
            {
                cout << it->second << endl;
            }
            else
            {
                cout << "0" << endl;
            }
        }
    }

    return 0;
}
