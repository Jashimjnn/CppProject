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
    bool flag=false;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='H' || str[i]== 'Q' || str[i]=='9')
        {
            flag=true;
        }
    }
    if(flag)
    {
        Y;
    }
    else
    {
        N;
    }
    return 0;
}