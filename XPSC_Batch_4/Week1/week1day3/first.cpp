// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int n;
//     cout << "Input the number of terms: ";
//     cin >> n;
    
//     long long sum = 0;
//     long long term = 0;
    
//     cout << "The series: ";
//     for (int i = 1; i <= n; i++) {
//         term = term * 10 + 9;
//         cout << term;
//         sum += term;
//         if (i != n) cout << " + ";
//     }
    
//     cout << endl << "The sum of the series = " << sum << endl;
    
//     return 0;
// }



#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            // Printing alternating '0' and '1' based on row number
            if ((i + j) % 2 == 0) {
                cout << "1";
            } else {
                cout << "0";
            }
        }
        cout << endl;
    }

    return 0;
}
