#include <stdio.h>
char *string_copy(char *dest, const char *src);

int main(void)
{
	char s1[98];
	char *p;

	p = string_copy(s1, "First, solve the problem. Then, write the code\n");
	printf("%s", s1);
	printf("%s", p);
	return (0);
}

/* replicate strcpy function */
char *string_copy(char *dest, const char *src)
{
	int i;
	
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return dest;
}

/* int strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
	}

	return i + 1;
	} */
