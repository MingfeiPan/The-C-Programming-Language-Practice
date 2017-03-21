#include <stdio.h>

unsigned invert(unsigned x, int p, int n){
    unsigned xmask = (~(~0 << n)) << (p-n+1);
    return x ^ xmask;
}

int main(){

    unsigned x = 111;
    int p = 4;
    int n = 3;
    printf("%u\n", invert(x,p,n));
    return 0;
}
