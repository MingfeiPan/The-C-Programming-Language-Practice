/**
 * remove all comments
**/ 

#include <stdio.h>

#define MAXLINE 1024

int getmyline(char line[], int maxline);

int main()
{
    char buffer[MAXLINE];
    int comment,len,quote,i;
    comment = quote = 0;
    while((len = getmyline(buffer, MAXLINE)) > 0){
    	i = 0;
	while(i < len){
	    if(buffer[i] == '"'){
	    	quote = 1;
	    }
	    if(!quote){
	    	if(buffer[i] == '/' && buffer[i+1] == '*'){
		    i += 2;
		    comment = 1;
		}	
		if(buffer[i] == '*' && buffer[i+1] == '/'){
		    i += 2;
		    comment = 0;
		}
		if(comment){
		    i++;
		}else{
			putchar(buffer[i]);
			i++;
		}
	    }else{
	    	putchar(buffer[i]);
		i++;
	    }
	}
    }
    return 0;
}

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

