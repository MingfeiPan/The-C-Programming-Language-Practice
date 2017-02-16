#include <stdio.h>

//no pic thx
int main(){
	int c,i,flag,nother;
	int ndigit[10];

	flag = nother = 0;
	for (int i = 0; i < 10; ++i)
	{
		ndigit[i] = 0;
	}

	while( (c = getchar()) != EOF)
	{
		if (flag >= 9){
			ndigit[9] += 1;
			flag = 0;
		}
		if(c != ' ' && c != '\t' && c != '\n')
		{
			flag += 1;		
		}	
		else
		{
			ndigit[flag] += 1;
			flag = 0;
		}
	} 
	for (int i=0; i < 10; ++i){
		printf("the number of length i %d  is : %d\n", i, ndigit[i]);
	}
	return 0;
}
