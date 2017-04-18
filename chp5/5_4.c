#include <stdio.h>
#include <string.h>

int strend(char *s, char *t){
	int flags = strlen(s) - 1;
	int flagt = strlen(t) - 1;

	while(flagt){
		if(s[flags] == t[flagt]){
			flagt--;
			flags--;
		}
		else{
			return 0;
		}
	}
	return 1;
}

int main(){
	char *s = "abcdefg";
	char *t = "efgfs";
	int ret = strend(s,t);
	printf("%d\n", ret);
	return 0;
}
