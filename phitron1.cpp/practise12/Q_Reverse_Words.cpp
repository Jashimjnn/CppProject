#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define y cout << "YES" << endl;
#define n cout << "NO" << endl;
int main()
{
    string str;
    // getline(cin, str);
    // reverse(str.begin(), str.end());
    // stringstream ss(str);
    // string str1;
    // string s;
    string str1[100005];
    int c = 0;
    while (cin >> str)
    {
        reverse(str.begin(), str.end());
        str1[c] = str;
        c++;
    }
    for (int i = 0; i < c; i++)
    {
        cout << str1[i];
        if (i < c - 1)
            cout << " ";
    }
    return 0;
}