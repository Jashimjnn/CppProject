#include <stdio.h>
// n#include<bits/stdc++.h>
// using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    scanf("%lld", &t);
    while (t--)
    {
        ll n;
        scanf("%lld", &n);

        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            ll x;
            scanf("%lld", &x);
            sum += x % n;
        }
        if (sum % n == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}