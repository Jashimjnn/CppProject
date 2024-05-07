#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int a,b;
    char ch;
    cin>>a>>ch>>b;
    if(ch=='+')
    {
        cout<<a+b<<endl;
    }
    else if(ch=='-')
    {
        cout<<a-b<<endl;
    }
    else if(ch=='*')
    {
        cout<<a*b<<endl;
    }
    else
    {
        cout<<a/b<<endl;
    }
    return 0;
}