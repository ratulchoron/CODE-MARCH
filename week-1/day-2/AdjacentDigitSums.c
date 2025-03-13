#include <stdio.h>

// Function to calculate the sum of digits of a number
int sum_of_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int t, x, y;
    scanf("%d", &t); // Read number of test cases

    while (t--) {
        scanf("%d %d", &x, &y); // Read x and y for each test case
        int found = 0;

        // Try finding an integer n such that S(n) = x and S(n+1) = y
        for (int n = 1; n <= 100000; n++) { // Checking up to a reasonable limit
            if (sum_of_digits(n) == x && sum_of_digits(n + 1) == y) {
                found = 1;
                break;
            }
        }

        if (found)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
