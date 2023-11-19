#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define y cout<<"YES"<<endl;
#define n cout<<"NO"<<endl;
int main()
{
//    string str="Jashim";
//    cout<<"size : "<<str.size()<<endl;
//    cout<<"max size : "<<str.max_size()<<endl;
//    cout<<"capacity : "<<str.capacity()<<endl;
//    str.clear();
//    cout<<"clear :"<<str<<endl;
//    string str1;
//    if(str1.empty()==true)
//    {
//      y;
//    }
//    else
//    {
//     n;
//    }
     string str2;
     cin>>str2;
     cout<<"size : "<<str2.size()<<endl;
     str2.resize(5);
     cout<<"size : "<<str2<<endl;
     str2.resize(6,'X');
     cout<<"size : "<<str2<<endl;
   return 0;
}