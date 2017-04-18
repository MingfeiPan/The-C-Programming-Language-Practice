#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define TRUE  1
#define FALSE 0

#define MAXLINES 5000
#define MAXLEN   1000

char *lineptr[MAXLINES];
char lines[MAXLINES][MAXLEN];


int mygetline(char s[], int lim){
	int c,i;
	for (i = 0; i < lim && (c = getchar()) != EOF && c != '\n'; i++){
		s[i] = c;
	}
	if(c == '\n'){
		s[i++] = c;
	}
	s[i] = '\0';
	return i;
}

int readlines(char *lineptr[], int maxlines){
	int len, nlines;
	char *p, line[MAXLEN];

	nlines = 0;
	while((len = mygetline(line, MAXLEN)) > 0){
		if(nlines >= maxlines || (p = malloc(len)) == NULL){
			return -1;
		}
		else{
			line[len - 1] = '\0';
			strcpy(p, line);
			lineptr[nlines++] = p;
		}
	}
	return nlines;
}

int anoreadlines(char lines[][MAXLEN], int maxlines){
	int len, nlines;
	nlines = 0;
	while((len = mygetline(lines[nlines], MAXLEN)) > 0){
		if(nlines >= maxlines){
			return -1;
		}	
		else{
			lines[nlines++][len - 1] = '\0';
		}
	}
	return nlines;
}

int main(){

	readlines(lineptr, MAXLINES);
	//anoreadlines(lines, MAXLINES);
	return 0;

}

