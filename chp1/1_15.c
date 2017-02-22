#include <stdio.h>

void transtemp();

int main(int argc, char const *argv[])
{
	transtemp();
	return 0;
}

void transtemp()
{
	float fahr, cel;
	float lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = lower;
	printf("%s %s\n", "fahr", "cel");
	while(fahr <= upper)
	{
		cel = (5./9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, cel);
		fahr += step;
	}
	return;
}
