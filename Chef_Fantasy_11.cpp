#include <iostream>
using namespace std;

long long calculateChoices(int N) {
   
    return N * (N - 1);
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;

        long long choices = calculateChoices(N);
        cout << choices << endl;
    }

    return 0;
}
