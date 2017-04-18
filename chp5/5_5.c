#include <stdio.h>
#include <string.h>

void mystrncpy(char* s, char* t, int n){
	while(n>0){
		if(*t == '\0') return;
	*s++ = *t++;
		n--;
	}
	*s = '\0';
	return ;
}

int main(){
	char s[] = "abcdefg";
	char *t = "abcd";
	mystrncpy(s, t, 3);
	printf("%s\n", s);
	return 0;
}
