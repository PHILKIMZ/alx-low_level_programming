#include <stdio.h>

/**
 * maint -Entry point
 *
 * Return always 0 (success)
 */

int main(void)
{
	printf("size of char:%lu byte(s)\n",sizeof (char));
	printf("size of int:%lu byte(s)\n",sizeof (int));
	printf("size of a long int: %lu byte(s)\n",sizeof (long int));
	printf("size of a long long int: %lu byte(s)\n",sizeof (long long int));
	return (0);

}
