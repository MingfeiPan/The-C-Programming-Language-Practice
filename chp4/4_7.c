#include <stdio.h>
#include <string.h>

#define BUFSIZE 100

char buf[BUFSIZE];
int bufp = 0;

int getch(){
	return (bufp > 0) ? buf[--bufp] : getchar();
}

void unGetch(int c){
	if(bufp >= BUFSIZE){
		printf("ungetch: too many characters\n");
	}
	else{
		buf[bufp++] = c;
	}
	return;
}

void ungets(char *s){
	int length = strlen(s);
	while(length > 0){
		unGetch(s[--length]);
	}
	return;
}

int main(){
	int c;
	char *s = "Hello World!";
	ungets(s);
	while((c = getch()) != EOF){
		putchar(c);
	}
	return 0;

}
