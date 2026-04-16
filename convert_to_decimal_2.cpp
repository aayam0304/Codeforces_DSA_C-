#include <iostream>

using namespace std;

void solve() {
    long long n;
    if (!(cin >> n)) return;

    // Step 1: Count the number of set bits (1s)
    int count = 0;
    long long temp = n;
    while (temp > 0) {
        if (temp % 2 == 1) {
            count++;
        }
        temp /= 2;
    }

    // Step 2: Calculate the decimal value of 'count' ones
    // The value of a binary number with 'k' ones is (2^k - 1)
    // We use 1LL << count to perform 2^count safely
    long long ans = (1LL << count) - 1;

    cout << ans << endl;
}

int main() {
    // Optimization for faster I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}