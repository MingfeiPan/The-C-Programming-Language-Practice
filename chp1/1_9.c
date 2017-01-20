#include <stdio.h>

int main(int argc, char const *argv[])
{
	int c;
	int isspace;
	while(( c = getchar()) != EOF)
	{
		if(c == ' ')
		{
			if(isspace == 0)
			{
				isspace = 1;
				putchar(c);
			}
		}
		else
		{
			isspace = 0;
			putchar(c);
		}
	}
	printf("\n");
	return 0;
}