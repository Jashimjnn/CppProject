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
        int p1,p2;
        cin>>p1>>p2;
        int a1,a2;
        cin>>a1>>a2;
        int b1,b2;
        cin>>b1>>b2;
        float ans = sqrt(pow((p1-a1),2)+pow((p2-a2),2));
        float ans1 = sqrt(pow((p1-b1),2)+pow((p2-b2),2));
        // float ans2=ans-ans1;
        // float ans3=max(1,ans1);
        // float sum = ans2/ans3;
        cout<<ans<<endl;
    }
}