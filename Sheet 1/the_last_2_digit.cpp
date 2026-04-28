#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    // Calculate result step-by-step using modulo 100 to prevent any overflow
    long long res = (a % 100);
    res = (res * (b % 100)) % 100;
    res = (res * (c % 100)) % 100;
    res = (res * (d % 100)) % 100;

    // Use setfill and setw to ensure we always print two digits (e.g., 07 instead of 7)
    cout << setfill('0') << setw(2) << res << endl;

    return 0;
}