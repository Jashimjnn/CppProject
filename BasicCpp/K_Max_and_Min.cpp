#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int mx,mn;
    if(a>b && a>c)
    {
        mx = a;
    }
    else if(b>a && b>c)
    {
        mx = b;
    }
    else
    {
        mx = c;
    }

    if(a<b && a<c)
    {
        mn = a;
    }
    else if(b<a && b<c)
    {
        mn = b;
    }
    else
    {
        mn = c;
    }
    cout<<mn<<" "<<mx<<endl;
    return 0;
}