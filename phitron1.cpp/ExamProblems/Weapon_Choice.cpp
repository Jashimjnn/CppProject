#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int t;
    std::cin >> t;

    while (t--) {
        int h, x, y1, y2, k;
        std::cin >> h >> x >> y1 >> y2 >> k;


        int remaining_damage = std::max(0, (k * y2) - x);


        int hits = (remaining_damage + (y1 - 1)) / y1;


        hits = std::min(hits, (h + x - 1) / x);

        std::cout << hits << std::endl;
    }

    return 0;
}