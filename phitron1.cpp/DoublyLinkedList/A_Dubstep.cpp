#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    string str;
    cin >> str;
    string tmp = "WUB";
    for (int i = 0; i < str.size(); i++)
    {
        int x = str.find(tmp);
        if (x == -1)
        {
            break;
        }
        else
        {
            str.replace(x, 3, " ");
        }
    }
    cout << str << endl;

    return 0;
}