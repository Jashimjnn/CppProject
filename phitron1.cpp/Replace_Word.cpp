#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string str, str1;
        cin >> str >> str1;

        while (str.find(str1) != -1)
        {
            int x = str.find(str1);
            int y = str1.size();
            str.replace(x, y, "#");
        }
        cout << str << endl;
    }
    return 0;
}