#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   ll ar[3];
   ll mx = INT_MIN;
   ll mi = INT_MAX;
   for(int i=0;i<3;i++)
   {
    cin>>ar[i];
   }
   for(int i=0;i<3;i++)
   {
      mx = max(mx,ar[i]);
      mi = min(mi,ar[i]);
   }
   cout<<mi<<" "<<mx<<endl;
}