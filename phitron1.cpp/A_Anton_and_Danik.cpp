#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int cnta=0,cntd=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='A')
        {
            cnta++;
        }
        else
        {
            cntd++;
        }
    }
    if(cnta>cntd)
    {
        cout<<"Anton"<<endl;
    }
    else if(cnta<cntd)
    {
        cout<<"Danik"<<endl;
    }
    else
    {
        cout<<"Friendship"<<endl;
    }
    return 0;
}