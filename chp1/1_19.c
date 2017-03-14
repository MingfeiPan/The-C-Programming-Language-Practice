#include <stdio.h>

#define MAXLINE 1000

void reverse(char s[])
{
    char c;
    int i,j;
    for(j=0; s[j] != '\0';j++){
    }    
    j--;

    for(i=0; i<j; i++){
    	c = s[i];
	s[i] = s[j];
	s[j] = c;
	j--;
    }
}

int getmyline(char s[], int lim){
    int c,i;
    for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i){
    	s[i] = c;
    }
    if(c == '\n'){
    	s[i] = '\0';
    }
    return i;
}

int main(){
    char line[MAXLINE];

    while(getmyline(line, MAXLINE) > 0){
    	reverse(line);
	printf("%s\n", line);
    }
    return 0;
}
