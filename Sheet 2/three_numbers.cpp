#include <iostream>

using namespace std;

int main() {
    int K, S;
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    if (!(cin >> K >> S)) return 0;

    long long count = 0;

    // Iterate through all possible values of X and Y
    for (int x = 0; x <= K; x++) {
        for (int y = 0; y <= K; y++) {
            // Calculate what Z needs to be
            int z = S - x - y;

            // Check if this Z falls within the allowed range [0, K]
            if (z >= 0 && z <= K) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}