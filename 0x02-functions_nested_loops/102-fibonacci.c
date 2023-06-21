#include <stdio.h>

void fibonacci(int n) {
    int i;
    unsigned long long t1 = 1, t2 = 2, nextTerm;

    printf("Fibonacci Series: ");

    printf("%llu, %llu, ", t1, t2);

    for (i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        printf("%llu, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

int main() {
    fibonacci(50);
    return 0;
}
