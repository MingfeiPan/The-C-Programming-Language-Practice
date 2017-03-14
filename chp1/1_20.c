#include <stdio.h>

#define MAXBUFFER 1024



int getmyline(char s[], int lim)
{
    int c,i;
    for(i = 0; i< lim-1 && (c = getchar()) != EOF  && c != '\n'; i++)
    {
        s[i] = c;
    }
    if(c == '\n'){
    	s[i] = c;
	i++;
    }
    s[i] = '\0';
    return i;
}


int main(){
    char buffer[MAXBUFFER];
    while(getmyline(buffer, MAXBUFFER) > 0){
    	for(int i=0; buffer[i] != '\0';i++){
	    if(buffer[i] == '\t'){
	    	putchar('    ');
	    }else{
	    	putchar(buffer[i]);
	    }
	}
    }
    return 0;
}
