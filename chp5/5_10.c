#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define MAXSIZE 1024

double stack[MAXSIZE];
int stacksize = 0;

void error(const char *message){
	fprintf(stderr, "%s\n", message);
	exit(-1);
}

void push(double value){
	if(stacksize == MAXSIZE){
		error("not enough mana");
	}
	stack[stacksize++] = value;
}

double pop(){
	if(stacksize == 0){
		error("stack is empty");
	}
	return stack[--stacksize];
}

int main(int argc, char **argv){
	int i;
	double value;

	for(i=1;i<argc;i++){
		switch(argv[i][0]){
			case '\0':
				error("arguments errors");
				break;
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
				push(atof(&argv[i][0]));
				break;
			case '+':
				push(pop()+pop());
				break;
			case '-':
				value = pop();
				push(pop() - value);
				break;
			case '*':
				push(pop() * pop());
				break;
			case '/':
				value = pop();
				if (value == 0){
					error("zero devider");
				}
				else{
					push(pop()/value);
					break;
				}
			default:
				error("op is not supportted");
				break;
		}
	}
	printf("%f\n",pop());
	return 0;
}

