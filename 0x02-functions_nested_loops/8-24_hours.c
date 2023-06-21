#include <stdio.h>
/**
 * jack_bauer - function that prints every minute of the day, 24 hour clock
 * h = hour, m = minutes
 * / 10 allows second digit to rotate
 * for loop break before passing 24:00
 * return: 24 hour clock line by line
 */
void jack_bauer(void)
{
    int h, m;

    for (h = 0; h < 24; h++)
    {
        for (m = 0; m < 60; m++)
        {
            printf("%02d:%02d\n", h, m);
        }
    }
}
