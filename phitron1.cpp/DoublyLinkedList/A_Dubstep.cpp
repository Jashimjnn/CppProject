#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    
    string str;
    cin>>str;

    string tmp="";

    for (int i = 0; i < str.size(); i++)
    {
        if (str.substr(i, 3) == "WUB")
        {

            i += 2;
        }
        else
        {

            while (i < str.size() && str.substr(i, 3) != "WUB")
            {
                tmp += str[i];
                i++;
            }

            if (i < str.size())
            {
                tmp += ' ';
            }
            i--;
        }
    }
    cout << tmp << endl;
    return 0;
}