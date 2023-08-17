#include "main.h"
/**
*_isupper - checks if char is uppercase
*Return: returns 1 if char is uppercase and 0 otherwise
*@c: char to be checked
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	return (1);
	return (0);
}
