#include "main.h"

int main(void)
{
	int a[5] = {0, 1, 2, 3, 4};
	int *p = a;

	*(p + 2) = 98; /* Update the value of a[2] to 98 */

	/* Rest of the code */

	return (0);
}
