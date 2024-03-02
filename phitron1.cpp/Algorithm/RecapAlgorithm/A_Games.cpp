// #include <iostream>
// int n, a = 0, i, j, f[33], d[33];
// int main()
// {
//     std::cin >> n;
//     for (i = 0; i < n; std::cin >> f[i] >> d[i], i++)
//         ;
//     for (i = 0; i < n; i++)
//         for (j = 0; j < n; j++)
//             if (f[i] == d[j])
//                 a++;
//     std::cout << a;
// }
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int n, a = 0, i, j, f[33], d[33];
    cin >> n;
    for (i = 0; i < n;cin >> f[i] >> d[i], i++)
        ;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (f[i] == d[j])
                a++;
    cout << a;
    return 0;
}