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
    if(ch>=97 && ch<=122)
    {
        ch-=32;
        cout<<ch<<endl;
    }
    else
    {
        ch+=32;
        cout<<ch<<endl;
    }
    return 0;
}