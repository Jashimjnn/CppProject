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
    for(int i=0;i<1;i++)
    {
       if(str[i]>='a' && str[i]<='z')
       {
        str[i]-=32;
       }
       cout<<str<<endl;
    }
    return 0;
}