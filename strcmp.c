#include "main.h"

/**
*_strcmp - Compare Two String
*@s1: One string
*@s2: Two String
*Return: Compare of both string
*/
int _strcmp(char *s1, char *s2)
{
	int n = 0;

	while (s1[n] == s2[n] && s1[n] != '\0' && s2[n] != '\0')
		n++;
	return (s1[n] - s2[n]);
}