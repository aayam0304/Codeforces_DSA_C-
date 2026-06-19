#include <iostream>
#include <algorithm>

using namespace std;

// Function to calculate sum from 1 to N using long long to avoid overflow
long long sumToN(long long n) {
    return (n * (n + 1)) / 2;
}

void solve() {
    long long L, R;
    cin >> L >> R;
    
    // Ensure L is less than or equal to R
    if (L > R) {
        swap(L, R);
    }
    
    // Sum from L to R inclusive is (Sum up to R) - (Sum up to L-1)
    long long total_sum = sumToN(R) - sumToN(L - 1);
    
    cout << total_sum << "\n";
}

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    
    return 0;
}