#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

// Recursive function to play the game
string playGame(ll n, ll h, vector<ll>& v) {
    // Base case: check if all monsters are defeated
    bool allMonstersDefeated = true;
    for (ll i = 0; i < n; ++i) {
        if (v[i] > 0) {
            allMonstersDefeated = false;
            break;
        }
    }
    if (allMonstersDefeated) {
        return "Hablu";
    }

    // Check if Hablu's hero character's health becomes zero or less
    if (h <= 0) {
        return "Dablu";
    }

    // Reduce health of all monsters by 1
    for (ll i = 0; i < n; ++i) {
        if (v[i] > 0) {
            v[i]--;
        }
    }

    // Find the monster with the maximum health
    ll maxHealth = 0;
    ll maxHealthMonsterIndex = -1;
    for (ll i = 0; i < n; ++i) {
        if (v[i] > maxHealth) {
            maxHealth = v[i];
            maxHealthMonsterIndex = i;
        }
    }

    // Subtract the health of the chosen monster from Hablu's health
    h -= v[maxHealthMonsterIndex];

    // Recursively call the function with updated parameters
    return playGame(n, h, v);
}

int main() {
    ll n, h;
    cin >> n >> h;
    vector<ll> v(n);
    for (ll i = 0; i < n; ++i) {
        cin >> v[i];
    }
    string winner = playGame(n, h, v);
    cout << winner << endl;
    return 0;
}
