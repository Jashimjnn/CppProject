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
    int x=0,y=0,z=0;
    while(n--)
    {
        int ar[3];
        for(int i=0;i<3;i++)
        {
            cin>>ar[i];
        }
         x+=ar[0];
        y+=ar[1];
        z+=ar[2];
    }
    if(x==0 && y==0 && z==0)
    {
        Y;
    }
    else
    {
        N;
    }
    return 0;
}