#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 1024

void reverse(char *s){
    int i,j,k;
    j = strlen(s) - 1;
    for (i = 0; i<j;i++){
    	k = s[i];
	s[i] = s[j];
	s[j--] = k;
    }
}
void itob(int n, char *s, int b){
    char *digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i,sign;

    if (b < 2 || b > 36){
    	fprintf(stderr, "can not support  base %d\n", b); 
	exit(EXIT_FAILURE);
    }

    if((sign = 0) < 0){
    	n = -n;
    }
    do{
	s[i++] = digits[n % b];
    }while( (n /= b) > 0);
    if(sign < 0){
    	s[i++] = '-';
    }
    s[i] = '\0';
    reverse(s);
}

int main(){
    char result[MAXLINE];
    itob(INT_MAX, result, 37);
    printf("%d\n", INT_MAX);
    printf("%s\n", result);
    return 0;
};
