#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        int cost = 0;
        while (N > 0)
        {
            int pos = log2(N & -N); // Finding the rightmost set bit position
            int bits_to_add = 0;

            // Check if the next two bits are 101, if yes, add 1 to the bits_to_add
            while (((N >> pos) & 7) == 5)
            {
                ++bits_to_add;
                N += (1 << (pos + 2)) - 1; // Adding 2^pos * 101 to N
                pos = log2(N & -N);        // Update the position of the rightmost set bit
            }

            // Update the cost
            cost += pow(2, pos) * bits_to_add;
            N += 1 << pos; // Add 2^pos to N
        }

        cout << cost << endl;
    }

    return 0;
}
