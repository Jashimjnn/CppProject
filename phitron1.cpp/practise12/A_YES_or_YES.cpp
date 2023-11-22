#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        bool flag = false;
        string str1="YES";
       transform(str.begin(),str.end(),str.begin(),::toupper);
        // for (int i = 0; i < str.size(); i++)
        // {
        //     if (str[i]=='Y' || str[i]=='E' || str[i]=='S')
        //     {
        //         flag = true;
        //     }
        // }
        //flag = strcmp(str,str1);
        if (str.compare(str1))
        {
            N;
        }
        else
        {
            Y;
        }
    }
    return 0;
}