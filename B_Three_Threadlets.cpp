#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
#define all(v) v.begin(), v.end()
#define min(a, b) a <= b ? a : b
#define max(a, b) a >= b ? a : b
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        int mi = min(a, min(b, c));
        bool flag=true;
        int count=0;
        if(a%mi!=0 || b%mi!=0 || c%mi!=0)
        {
            flag=false;
        }
        while(a!=mi)
        {
            if(a%mi!=0 || count>3)
            {
             flag=false;
             break;
            }
            a-=mi;
            count++;
        }
        while(b!=mi)
        {
            if(b%mi!=0 || count>3)
            {
             flag=false;
             break;
            }
            b-=mi;
            count++;
        }
        while(c!=mi)
        {
            if(c%mi!=0 || count>3)
            {
             flag=false;
             break;
            }
            c-=mi;
            count++;
        }
        if(count>3)
        {
            flag=false;
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}