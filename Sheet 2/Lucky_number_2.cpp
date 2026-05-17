#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * Checks if a number is "lucky" (contains only digits 4 and 7).
 */
bool isLucky(int n) {
    string s = to_string(n);
    for (char c : s) {
        if (c != '4' && c != '7') {
            return false;
        }
    }
    return true;
}

int main() {
    int A, B;
    if (!(cin >> A >> B)) return 0;

    bool found = false;
    bool first = true;

    for (int i = A; i <= B; ++i) {
        if (isLucky(i)) {
            // Ensure space-separated output without a trailing space
            if (!first) {
                cout << " ";
            }
            cout << i;
            found = true;
            first = false;
        }
    }

    // If no lucky numbers were found in the range, print -1
    if (!found) {
        cout << -1;
    }

    cout << endl;
    return 0;
}