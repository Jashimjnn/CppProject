#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int sum(int x);
void display(int t)
{
    int x,k;
    cin>>x>>k;
    while(sum(x)%k!=0)
    {
        x++;
    }
    cout<<x<<endl;
}
int sum(int x)
{
   //int y=x;
   int sum=0;
   while(x!=0)
   {
    int tmp=x%10;
    sum+=tmp;
    x/=10;
   }
   return sum;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        display(t);
    }
    return 0;
}
