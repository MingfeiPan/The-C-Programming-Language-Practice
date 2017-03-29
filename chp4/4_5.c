/*
 * sin,cos,pow
 */

#include <string.h>
#include <math.h>

void sinCosPow(char *s){
	double op2;
	if(0 == strcmp(s, "sin")){
		push(sin(pop()));
	}
	if(0 == strcmp(s, "cos")){
		push(cos(pop()));
	}
	if(0 == strcmp(s, "pow")){
		op2 = pop();
		push(pow(pop(), op2));
	}
	return;
}


