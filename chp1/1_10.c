#include <stdio.h>

int main(int argc, char const *argv[])
{
	int c;
	while((c = getchar()) != EOF && c != 'a')
	{
		if(c == '\\')
		{
			putchar('\\');
			putchar('\\');
		}
		if(c == '\t')
		{
			putchar('\\');
			putchar('t');
		}
		if(c == '\b')
		{
			putchar('\\');
			putchar('b');
		}	
		if(c == '\n')
		{
			putchar('\\');
			putchar('n');
		}						
	}
	return 0;
}