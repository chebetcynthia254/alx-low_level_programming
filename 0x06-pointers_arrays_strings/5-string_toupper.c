#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: input string
 * Return: pointer to the modified string
 */
char *string_toupper(char *str)
{
if (str == NULL)
return NULL;
char *ptr = str;
while (*ptr != '\0')
{
if (islower(*ptr))
{
*ptr = toupper(*ptr);
}
ptr++;
}
return(str);
}
