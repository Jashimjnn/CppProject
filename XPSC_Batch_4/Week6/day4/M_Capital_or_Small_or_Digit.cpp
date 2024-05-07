#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    char ch;
    cin>>ch;
    if(ch>=65 && ch<=90)
    {
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL"<<endl;
    }
    else if(ch>=97 && ch<=122)
    {
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL"<<endl;
    }
    else
    {
        cout<<"IS DIGIT"<<endl;
    }
    return 0;
}