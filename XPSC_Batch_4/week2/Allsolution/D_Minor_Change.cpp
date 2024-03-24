#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    string str1;
    cin>>str1;
    string str2;
    cin>>str2;
    ll cnt=0;
    for(int i=0;i<str1.size();i++)
    {
        if(str1[i]!=str2[i])
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}