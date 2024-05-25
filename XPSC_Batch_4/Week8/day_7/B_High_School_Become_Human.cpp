#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    double x, y;
    cin >> x >> y;
    x = y * log(x) - x * log(y);
    if(x>0)
    {
        cout<<">"<<endl;
    }
    else
    {
        if(x<0)
        {
            cout<<"<"<<endl;
        }
        else
        {
            cout<<"="<<endl;
        }
    }
    return 0;
}