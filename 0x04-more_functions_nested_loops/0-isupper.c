#include "main.h"

/**
 * int _isupper - checks whether its an upper case character .
 * @c char to check .
 * Returns 1 if c is uppercase,0 in other case .
 */
int _isupper(int c);
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
