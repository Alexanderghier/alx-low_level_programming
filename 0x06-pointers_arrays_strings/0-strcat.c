#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: A pointer to character that will be changed and @src: A pointer to a character that will also be changed
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int x, y;


for (x = 0; dest[x] != '\0'; x++)

	;
for (y = 0; src[y] != '\0'; y++)
{

dest[x] = src[y];
x++;

}
dest[x] = '\0';
return (dest);

}
