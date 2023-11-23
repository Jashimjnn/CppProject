#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int a,b;
    cin>>a>>b;
    int x,y;
    int cnt=0;
    while(1)
    {
       a*=3;
       b*=2;
       cnt++;
       if(a>b)
       {
        break;
       }
    }
    cout<<cnt<<endl;
    return 0;
}