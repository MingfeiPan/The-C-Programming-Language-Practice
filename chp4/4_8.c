#include <stdio.h>
#include <string.h>

#define BUFSIZE 1

char buf[1];
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

int main(){
	return 0;
}
