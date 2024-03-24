#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string str;
        cin>>str;
        string str1;
        cin>>str1;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (str[i]!=str1[i])
            {
                char ch=str[i];
                char ch1=str1[i];
                if((ch=='G' && ch1=='B')||(ch=='B' && ch1=='G'))
                {
                    continue;
                }
                else
                {
                    flag = true;
                    break;
                }
            }
            if(str[i]==str1[i])
            {
                continue;
            }
            else
            {
                flag = true;
                break;
            }
        }
        if(flag==true)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}