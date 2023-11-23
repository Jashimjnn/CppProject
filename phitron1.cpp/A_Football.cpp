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
    int cnt = 0;
    string str1 = "1111111";
    string str2 = "0000000";
    bool flag = false;
    for (int i = 0; i < 2; i++)
    {
        if (i == 0)
        {
            auto isFound = str.find(str1);
            if (isFound != string::npos)
            {
                flag = true;
                break;
            }
        }
        else
        {
            auto isFound = str.find(str2);
            if (isFound != string::npos)
            {
                flag = true;
                break;
            }
        }
    }
    if (flag)
    {
        Y;
    }
    else
    {
        N;
    }

    return 0;
}