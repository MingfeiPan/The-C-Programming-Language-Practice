#include <stdio.h>

int main(int argc, char const *argv[])
{
	float fahr, celsius;
	float lower, upper, step;

	lower = -273;
	upper = 100;
	step = 20;

	celsius = lower;
	printf("%s %s\n", "celsius", "fahr");
	while (celsius <= upper)
	{
		fahr = celsius*(9.0/5.0) + 32.0;
		// celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %8.1f\n", celsius, fahr);
		celsius += step;
	}
	return 0;
}