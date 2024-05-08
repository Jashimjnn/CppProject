#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if((c>b && d>b) || (c<a && d<a))
    {
        cout<<-1<<endl;
    }
    else
    {
        int x = max(a,c);
        int y = min(b,d);
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}