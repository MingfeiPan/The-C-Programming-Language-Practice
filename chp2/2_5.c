#include <stdio.h>

int any(char *s1, char *s2){
    int pos = -1;
    for(int i = 0; s1[i] != '\0' && pos == -1; i++){
    	for(int j = 0; s2[j] != '\0' && pos == -1; j++){
	    if(s1[i] == s2[j]) pos = i;
	}
    }
    return pos;
}

int main(){
    char *s1 = "abcdefg";
    char *s2 = "efg";
    printf("%d\n", any(s1,s2));
    return 0;
}
