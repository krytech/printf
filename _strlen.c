#include "holberton.h"

/**
* _strlen - string length... I had Ramen for dinner
* @s: SsSsssSssSSSss
* Return: count...ing the hours I invest into progress
*/

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count))
	{
		count++;
	}
	return (count);
}
