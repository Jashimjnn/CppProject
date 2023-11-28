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
    int  mx = 0;
   int  x = (a+b)*c;
   int y = (b+c)*a;
   int z = a*b*c;
   int  p = a+b+c;
   mx = max(x,y);
   int ans = max(mx,z);
   int cnt = max(ans,p);
   cout<<cnt<<endl;
   return 0;
}