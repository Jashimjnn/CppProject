#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int r, o, c;
    cin >> r >> o >> c;
    int x = 20 - o;
    int y = (x * 6)*6 + c;
    if (y>r)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
