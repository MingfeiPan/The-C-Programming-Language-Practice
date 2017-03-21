#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y){
    unsigned xmask = ~(~0 << (p-n+1)) | (~0 << (p+1));
    x = x & xmask;
    unsigned ymask = ~(~0 << n) & y;
    ymask = ymask << (p-n+1);
    return x | ymask;
}


unsigned setbitss(unsigned x, int p, int n, unsigned y){
    return (x & ((~0 << (p + 1)) | (~(~0 << (p + 1 - n))))) | ((y & ~(~0 << n)) << (p + 1 - n));
}

int main(){
    unsigned i,j,k;
    int p,n;
    i = 211;
    j = 51;
    p = 4;
    n = 3;
    k = setbits(i,p,n,j);
    printf("%u\n",k);
    return 0;
}
