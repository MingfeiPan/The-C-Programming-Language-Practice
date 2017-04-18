#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>

#define MAXOP 100
#define NUMBER 0
#define TRUE 1
#define BUFSIZE 100
#define FALSE 0
#define MAXVAL 100

int Getop(char s[]); 
void push(double val); 
double pop(); 
void showTop(); 
void duplicate(); 
void swapItems(); 
void clearStack();
int getch();
void unGetch(int c);

int main(){
	int type;
	double op2;
	char s[MAXOP];
	int flag = TRUE;
	while((type = Getop(s)) != EOF){
		switch(type){
			case NUMBER:
				push(atof(s));break;
			case '+':
				push(pop() + pop());break;
			case '*':
				push(pop() * pop());break;
			case '-':
				op2 = pop();
				push(pop() - op2);break;
			case '/':
				op2 = pop();
				if(op2){
					push(pop() / op2);
				}
				else{
					printf("\nError: division by zero!");
				}
				break;
			case '%':
				op2 = pop();
				if(op2){
					push(fmod(pop(), op2));
				}
				else{
					printf("\nError: division by zero!");
				}
				break;
			case '?':
				showTop();break;
			case '#':
				duplicate();break;
			case '~':
				swapItems();break;
			case '!':
				clearStack();break;
			default:
				printf("\nError: unknown command %s.\n", s);
				break;
		}
	}
	return 0;
}

int sp = 0;
double val[MAXVAL];

void push(double f){
	if(sp < MAXVAL){
		val[sp++] = f;
	}
	else{
		printf("\nError: stack full can't push %g\n", f);
	}
}

double pop(){
	if(sp > 0){
		return val[--sp];
	}
	else{
		printf("\nError: stack empty\n");
		return 0.0;
	}
}

void showTop(){
	if( sp > 0){
		printf("top one is %g\n", val[sp-1]);
	}
	else{
		printf("The stack is empty!\n");	
	}
}

void duplicate(){
	double temp = pop();
	push(temp);
	push(temp);
}

void swapItems(){
	double temp1 = pop();
	double temp2 = pop();
	push(temp1);
	push(temp2);
}

void clearStack(){
	sp = 0;
}

int Getop(char s[]){
	int i = 0;
	int c;
	int next;
	while((s[0] = c = getch()) == ' ' || c == '\t'){
	}
	s[1] = 0;
	if(!isdigit(c) && c != '.' && c != '-') return c;
	
	if(c == '-'){
		next = getch();
		if(!isdigit(next) && next != '.'){
			return c;
		}
		c = next;
	}
	else{
		c = getch();
	}
	while(isdigit(s[++i] = c)){
		c =getch();
	}
	if(c == '.'){
		while(isdigit(s[++i] = c = getch())){
		}
	}
	s[i] = '\0';
	if(c != EOF){
		unGetch(c);
	}
	return NUMBER;
}

char buf[BUFSIZE];
int bufp = 0;

int getch(){
	return (bufp > 0) ? buf[--bufp]: getchar();
}

void unGetch(int c){
	if(bufp >= BUFSIZE){
		printf("\nUnGetch: too many characters\n");
	}
	else{
		buf[bufp++] = c;
	}
}


