#include <stdio.h>
#define MAXLINE 1000

int getmyline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];
    while((len = getmyline(line, MAXLINE)) > 0)
    {
	max = 0;
        if(len > max){
	    max = len;
	    copy(longest, line);
	}
	if(max > 0){
	    printf("%s, length is %d\n", longest, max);
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

void copy(char to[], char from[])
{
    int i = 0;
    while((to[i] = from[i]) != '\0'){
    	i++;
    }
}


