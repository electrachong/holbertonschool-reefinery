#include <stdio.h>
#include <unistd.h>
void print_buffer(char *b, int size);
int print_char(char c);

int main(void)
{
	char buffer[] = "This is a string!\0And this is the rest of the #buffer :)\1\2\3\4\5\6\7#cisfun\n\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x20\x21\x34\x56#pointersarefun #infernumisfun\n";

	printf("%s\n", buffer);
	printf("---------------------------------\n");
	print_buffer(buffer, sizeof(buffer));
	return (0);
}


/* The function must print the content of size bytes of buffer b
The output should print 10 bytes per line
Each line starts with the position of the first byte of the line in hexadecimal (8 chars)
Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space
Each line shows the content of the buffer. If the byte is a printable character, print the letter, if not, print .
Each line ends with a new line \n
If the size if 0 or less, the output should be a new line only \n */
void print_buffer(char *b, int size)
{
	int i;
	
	/* let's say char is 1 byte */
	for (i = 0; i < size; i++)
	{
		print_char(b[i]);
		if ((i + 1) % 10  == 0)
		{
			print_char('\n');
		}
	}
}

int print_char(char c)
{
	return (write(1, &c, 1));
}
