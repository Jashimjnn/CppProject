#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define y cout<<"YES"<<endl;
#define n cout<<"NO"<<endl;
namespace Rakib
{
  int age=24;
  void hello()
  {
    cout<<"Rakib namespace"<<endl;
  }
}
namespace Sakib
{
  int age2=25;
  void hello2()
  {
    cout<<"Sakib namespace"<<endl;
  }
}
using namespace Rakib;
int main()
{
   cout<<age<<endl;
   cout<<Sakib::age2<<endl;
   hello();
   Sakib::hello2();
   return 0;
}