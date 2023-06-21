#include <stdio.h>

void printFibonacci(int n);

int main() {
    printFibonacci(50);

    return 0;
}

void printFibonacci(int n) {
    int a = 1, b = 2, count = 0;

    // Print the first two Fibonacci numbers
    putchar(a + '0');
    putchar(',');
    putchar(' ');
    putchar(b + '0');
    putchar(',');
    putchar(' ');
    count += 2;

    // Generate and print the remaining Fibonacci numbers
    while (count < n) {
        int next = a + b;
        putchar(next + '0');
        putchar(',');
        putchar(' ');

        a = b;
        b = next;
        count++;
    }

    putchar('\n');
}
