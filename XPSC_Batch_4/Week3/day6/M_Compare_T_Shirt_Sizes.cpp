#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string str, str1;
        cin >> str >> str1;
        char ch = str.back();
        char ch1 = str1.back();
        if (ch == ch1)
        {
            if (str.size() == str1.size())
            {
                cout << "="<<endl;
            }
            else if (ch == 'S')
            {
                if(str.size() < str1.size())
                {
                    cout<<">"<<endl;
                }
                else
                {
                    cout<<"<"<<endl;
                }
            }
            else
            {
                if(str.size() < str1.size())
                {
                    cout<<"<"<<endl;
                }
                else
                {
                    cout<<">"<<endl;
                }
            }
        }
        else
        {
            if(ch < ch1)
            {
                cout<<">"<<endl;
            }
            else
            {
                cout<<"<"<<endl;
            }
        }
    }
    return 0;
}