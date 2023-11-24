#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int n, t;
    cin >> n >> t;
    string str;
    cin >> str;
    for (int j = 0; j < t; j++)
    {
        for (int i = 0; i < str.size()-1; i++)
        {
            if (str[i] == 'B' && str[i + 1] == 'G')
            {
                // str[i]='G';
                // str[i+1]='B';
                str.replace(i, 1, "G");
                str.replace(i + 1, 1, "B");
                i++;
            }
        }
    }
    cout << str << endl;
    return 0;
}