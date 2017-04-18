#include <stdio.h>
#include <string.h>

int mygetline(char* s, int lim){
	int count;
	int c;
	while (--lim > 0 && (c = getchar()) != EOF && c != '\n'){
		*s++ = c;
		count++;
	}
	if(c == '\n') *s = '\0';
	return count;
}

int main(){
	char s[1000];
	int lim = 1000;
	int ret;
	ret = mygetline(s, lim);
	printf("%s\n", s);
	printf("%d\n", ret);
	return 0;
}
