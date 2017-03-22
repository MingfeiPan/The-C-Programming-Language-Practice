#include <stdio.h>
#include <string.h>

#define MAXLINE 1024

int getmyline(char *s, int limit){
    int i,c;
    i = 0;
    while(--limit > 0 && (c = getchar()) != EOF && c != '\n'){
    	s[i++] = c;
    }
    if(c == '\n') s[i++] = c;
    s[i] = '\0';
    return 0;
}

int strindex(char *s, char *t){
    int i,j,k;
    int length = strlen(s);
    for(i = length - 1; i > 0; i--){
    	j = i;
	for(k = 0; t[k] != '\0'; k++){
	    if(s[j] != t[k]){
	    	break;
	    }
	    j--;
	}
	if(k > 0 && t[k] == '\0'){
	    return i;
	}
    }
    return -1;
}

int main(){
    char *s = "abcdefg";
    char *t = "edc";
    printf("%d\n", strindex(s,t));
    return 0;
    
}

