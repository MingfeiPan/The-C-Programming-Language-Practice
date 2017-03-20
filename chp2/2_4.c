#include <stdio.h>

void squeeze(char *s1, char *s2){
    int k = 0;
    int issame = 0;
    int j;
    for(int i = 0; s1[i] != '\0'; i++){
	issame = 0;
    	for(j=0; s2[j] != '\0'; j++){
	    if(s1[i] == s2[j]){
		issame = 1;
		break;
	    }
	}
	if(!issame){
	    s1[k] = s1[i];
	    k++;
	}
    }
    s1[k] = '\0';
    return ;
}

int main(){
    char s1[] = "abcdefg";
    char *s2 = "cdef";
    //s1 不可用char *s1 定义 因为
    //指针初始化的char* m,不能用*(m+1)='o'修改此常量，因为这个字符串常量放在常量区不能被修改
    squeeze(s1,s2);
    printf("%s\n",s1);
    return 0;
}
