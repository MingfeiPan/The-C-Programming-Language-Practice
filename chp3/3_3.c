#include <stdio.h>
#include <string.h>
#define MAXLINE 1024

void expand(char *s1, char *s2){
    char Alpha[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";    
    char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
    char digits[10] = "0123456789";

    int i,j;
    i = 1;
    j = 0;    
    while(s1[i]){
    	if(s1[i] == '-'){
	    if(s1[i-1] == 'a' && s1[i+1] == 'z'){
	   	strcat(s2,alpha);
		i += 2;
		j += 26;
	    }
	    if(s1[i-1] == 'A' && s1[i+1] == 'Z'){
	    	strcat(s2,Alpha);
		i += 2;
		j += 26;
	    }
	    if(s1[i-1] == '0' && s1[i+1] == '9'){
	    	strcat(s2,digits);
		i += 2;
		j += 10;
	    }
	}
	else{
	    s2[j++] = s1[i++];
	}
	s2[j++] = s1[i++];	
    }
    s2[j] = '\0';
}

int main(){
    char result[MAXLINE];
    char *s1 = "a-z0-9A-Z---";
    expand(s1, result);
    printf("%s\n", result);
    return 0; 

}
