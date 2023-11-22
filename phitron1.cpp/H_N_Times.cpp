#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
void display(int t)
{
    int n;
    char ch;
    cin>>n>>ch;
    for(int i=0;i<n;i++)
    {
        cout<<ch<<" ";
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        display(t);
    }
    return 0;
}