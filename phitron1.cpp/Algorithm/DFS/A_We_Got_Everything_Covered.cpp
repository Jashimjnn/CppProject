#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string str = "";
        char ch='a';
        for(int i=0;i<k;i++)
        {
            str+=ch;
            ch++;
        }
        for(int i=0;i<n;i++)
        {
            cout<<str;
        }
        cout<<endl;
    }

    return 0;
}