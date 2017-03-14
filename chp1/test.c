#include <stdio.h>

int main(int argc, char const *argv[])
{
	int f1,f2,f3;
	f1=1;
	f2=2;
	f3=4;
	int ret;
	for (int i = 4; i <= 15; ++i)
	{
		ret = f1 + f2 +f3;
		f1 = f2;
		f2 = f3;
		f3 = ret;
	}
	printf("%d\n", ret);
	return 0;
}