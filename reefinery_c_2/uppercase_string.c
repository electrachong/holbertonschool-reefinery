#include <stdio.h>
char *uppercase_string(char *);

int main(void)
{
	char s[] = "Holberton School!\n";
	char *p;

	p = uppercase_string(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}

/* make all lowercase letters in a string uppercase */
char *uppercase_string(char *s)
{
	int i;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - ('a' - 'A');
		}
	}

	return s;
}
