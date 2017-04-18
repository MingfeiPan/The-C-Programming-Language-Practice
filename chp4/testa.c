#include <stdio.h>
#include <string.h>

#define MAXLINE 5
void push(int *p, char* s[], char c){
	if(*p < MAXLINE){
		sprintf((*s)++, "%c", c);
		(*p)++;
	}
	else{
		sprintf((*s)++, "%c", '\0');
		return;
	}
}

int main(){
	int sp = 0;
	char *sample = "abcde";
	char ss[100];
	char *p = ss;
	char c;
	int i = 0;
	while((c = sample[i]) != '\0'){
		push(&sp, &p, c);
		i++;
	}
	p = ss;
	for(int j = 0; j < 5; j++){
		printf("%c\n", *(p++));
	}
	return 0;

}
