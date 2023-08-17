#include "main.h"
/**
*_isdigit - checks if char is digit
*@c: char to be checked
*Return: returns 1 if char is digit and 0 otherwise
*/

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	return (1);
	return (0);
}
