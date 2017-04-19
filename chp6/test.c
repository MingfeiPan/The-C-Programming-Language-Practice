#include <stdio.h>

struct example{
	char a;
	char aa;
	char bb;
	char b;
	char c;
	int i;
	double d;
};


int main(){
	printf("%lu\n", sizeof(struct example));
	return 0;
}
