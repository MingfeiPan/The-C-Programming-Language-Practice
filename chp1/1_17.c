#include <stdio.h>
#define MAXLINE 1000

int getmyline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
    int len;
    int flag;
    char line[MAXLINE];
    char longest[MAXLINE][MAXLINE];
    flag = 80;
    int offset = 0;
    while((len = getmyline(line, MAXLINE)) > 0)
    {
        if(len >= flag){
	    copy(longest[offset], line);
	    offset++;
	}
    }
    for (int i=0; i<=offset;i++){
    	printf("%s\n", longest[i]);
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


