#include <iostream>

using namespace std;

/**
 * Helper function to calculate the sum of digits of a number.
 * Example: 123 -> 1 + 2 + 3 = 6
 */
int getSumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    // Optimize standard I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, A, B;
    if (!(cin >> N >> A >> B)) return 0;

    long long totalSum = 0;

    for (int i = 1; i <= N; ++i) {
        int digitSum = getSumOfDigits(i);
        
        // Check if the digit sum is within the inclusive range [A, B]
        if (digitSum >= A && digitSum <= B) {
            totalSum += i;
        }
    }

    cout << totalSum << endl;

    return 0;
}