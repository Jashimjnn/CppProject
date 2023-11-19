#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   int n;
   cin>>n;
   int ans = (n*(pow(n,2)+5))/6;
   cout<<ans<<endl;
   return 0;
}