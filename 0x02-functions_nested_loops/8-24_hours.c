#include <stdio.h>
/**
 * jack_bauer - function that prints every minute of the day, 24 hour clock
 * h = hour, m = minutes
 * / 10 allows second digit to rotate
 * for loop break before passing 24:00
 * return: 24 hour clock line by line
 * */
void jack_bauer(void)
{
    int hour, minute;

    for (hour = 0; hour < 24; hour++)
    {
        for (minute = 0; minute < 60; minute++)
        {
            printf("%02d:%02d\n", hour, minute);
        }
    }
}
