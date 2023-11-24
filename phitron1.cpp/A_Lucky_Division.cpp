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
    int ar[15]={4,7,44,47,74,16,77,444,447,474,477,744,747,774,777};
    bool flag=false;
    for(int i=0;i<15;i++)
    {
      if(n%ar[i]==0)
      {
        flag=true;
        break;
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