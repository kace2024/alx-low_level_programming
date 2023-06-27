#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    char password[84];
    int i, sum, diff;

    srand(time(0));

    for (i = 0, sum = 0; sum < 2772 - 122; i++)
    {
        password[i] = rand() % 94 + 33;
        sum += password[i];
    }

    diff = 2772 - sum;
    password[i] = diff;
    password[i + 1] = '\0';

    printf("%s", password);

    return 0;
}

