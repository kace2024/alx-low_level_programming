#include <stdio.h>

int main() {
    int limit = 1024;
    int sum = 0;

    for (int i = 1; i < limit; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    // Print the sum using putchar()
    int temp = sum;
    int digits = 0;

    // Count the number of digits in the sum
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    // Convert each digit of the sum to a character and print it
    for (int i = digits - 1; i >= 0; i--) {
        int digit = sum % 10;
        sum /= 10;
        putchar(digit + '0');
    }

    putchar('\n');

    return 0;
}
