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

    bool flag = true;
    for (int i = 1; i < str.length(); ++i)
    {
        if (islower(str[i]))
        {
            flag = false;
            break;
        }
    }

    if (flag==true)
    {
        for (char &ch : str)
        {
            if (islower(ch))
            {
                ch = toupper(ch);
            }
            else
            {
                ch = tolower(ch);
            }
        }
    }

    cout << str << endl;
    return 0;
}