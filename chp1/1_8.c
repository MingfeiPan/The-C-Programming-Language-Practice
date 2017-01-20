#include <stdio.h>


int main(int argc, char const *argv[])
{
	int countspace = 0;
	int counttable = 0;
	int countenter = 0;
	int c;
	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
			counttable++;		
		if (c == ' ')
			countspace++;
		if (c == '\n')
			countenter++;
	}

	printf("countspace is %d\n", countspace);
	printf("counttable is %d\n", counttable);
	printf("countenter is %d\n", countenter);

	return 0;
}