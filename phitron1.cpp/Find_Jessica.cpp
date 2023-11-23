#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    string str;
    getline(cin, str);
    bool flag = false;
    string str1 = "Jessica";
    stringstream ss(str);
    string wrd;
    while (ss >> wrd)
    {
        if (wrd == str1)
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}