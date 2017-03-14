#include <stdio.h>
#define MAXLINE 1024

int getmyline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
    char line[MAXLINE];
    char longest[MAXLINE][MAXLINE];
    int offset = 0;
    while(getmyline(line, 40) > 0)
    {
        copy(longest[offset], line);
	offset++;	
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


