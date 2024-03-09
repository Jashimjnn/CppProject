// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define Y cout << "YES" << endl;
// #define N cout << "NO" << endl;
// int main()
// {
//     ll n;
//     cin >> n;
//     ll k = n - 1;
//     ll sp = n;
//     ll sp1 = n - 1;
//     ll m_sp = 0;
//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = k; j >= 1; j--)
//         {
//             cout << " ";
//         }
//         k--;
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         if (i != n)
//         {
//             for (int j = sp; j >= 1; j--)
//             {
//                 cout << " ";
//             }
//             sp += 4;
//         }
//         for (int j = i; j >= 1; j--)
//         {
//             cout << "*";
//         }
//         for (int j = sp1; j >= 1; j--)
//         {
//             cout << " ";
//         }
//         sp1--;
//         cout << endl;
//     }
//     ll x = ceil((float)n/2.0);
//     ll sp2 = 1;
//     ll sp3 = 4*x;
//     ll st = 2;
//     for (int i = 2; i <= n; i++)
//     {
//         for (int j = sp2; j >= 1; j--)
//         {
//             cout << " ";
//         }
//         sp2++;
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         for (int j = sp3; j >= 1; j--)
//         {
//             cout << " ";
//             if (i == n)
//             {
//                 break;
//             }
//         }
//         sp3 -= 4;
//         for (int j = 1; j <= st; j++)
//         {
//             cout << "*";
//         }
//         st++;
//         cout << endl;
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int s1 = n - 1, k1 = n, s2 = 0, k2 = n;
//     for (int i = 1; i <= (2 * n) - 1; i++)
//     {
//         for (int j = 1; j <= s1; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= k1; j++)
//         {
//             cout << "*";
//         }
//         for (int j = 1; j <= s2; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= k2; j++)
//         {
//             cout << "*";
//         }
//         if (i < n)
//         {
//             s1--;
//             k1--;
//             s2 += 4;
//             k2--;
//         }
//         else
//         {
//             s1++;
//             k1++;
//             s2 -= 4;
//             k2++;
//         }
//         cout << endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e4;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // n=7, n-i+1 = 7-1+1=7
        // n=7, n-i+1 = 7-2+1=6
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }

        // n=7, (4*(i-1)) = (4*(1-1))=0
        // n=7, (4*(i-1)) = (4*(2-1))=4
        for (int j = 1; j <= (4 * (i - 1)); j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        cout << '\n';
    }

    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i + 1; j++)
        {
            cout << "*";
        }

        // n=7, i=1 -> (4*(7-(1+1))) = 4*(7-2) = 4*5 = 20
        for (int j = 1; j <= (4 * (n - (i + 1))); j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i + 1; j++)
        {
            cout << "*";
        }
        cout << '\n';
    }

    return 0;
}