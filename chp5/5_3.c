#include <stdio.h>
#include <string.h>

#define MAX 1024
void mystrcat(char *s, char *t){
	while(*s){
		s++;
	}
	strcpy(s, t);
	return ;
}

int main(){
	char s[MAX] = "start";
	char t1[] = "one";
	char t2[] = "two";
	mystrcat(s,t1);
	mystrcat(s,t2);

	printf("%s\n", s);
	return 0;
}
