#include "main.h"


/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 *
 * This function checks whether the given character is an alphabetic character.
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
