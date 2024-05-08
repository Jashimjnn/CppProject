#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int mx = 0, md = 0, mn = 0;
    if (a > b && a > c)
    {
        mx = a;
    }
    else if (b > a && b > c)
    {
        mx = b;
    }
    else if (c > a && c > b)
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
    if(a>b && a<c)
    {
        md = a;
    }
    else if(b>a && b<c)
    {
        md = b;
    }
    else
    {
        md = c;
    }
    cout<<mn<<endl;
    cout<<md<<endl;
    cout<<mx<<endl;
    cout << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    return 0;
}