#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void sort_it(ll n)
{
   ll *ar = new ll[n];
   for (int i = 0; i < n; i++)
   {
      cin >> ar[i];
   }
   sort(ar, ar + n, greater<ll>());
    for (int i = 0; i < n; i++)
   {
      cout << ar[i] << " ";
   }
   cout << endl;
   //return ar;
}

int main()
{
   ll n;
   cin >> n;
   //ll *ar = 
   sort_it(n);
   // for (int i = 0; i < n; i++)
   // {
   //    cout << ar[i] << " ";
   // }
   // cout << endl;
   // delete[] ar;
   return 0;
}