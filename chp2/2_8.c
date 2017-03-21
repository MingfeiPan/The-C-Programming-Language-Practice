#include <stdio.h>

unsigned rightrox(unsigned x, int n){
    unsigned xmask = 0;
    while(n > 0){
        if((x & 1) == 1){
	    x = (x >> 1) | ~(~xmask >> 1);
	}
	else{
	    x = (x >> 1);
	}
	n--;
    }
    return x;
}
int main(){
    unsigned x = 111;
    int n = 3;
    printf("%u\n", rightrox(x,n));
    return 0;
}
