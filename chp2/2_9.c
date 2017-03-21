/*
 *origin bitcount
 */
/* bitcount: count 1 bits in x */ 
int bitcount(unsigned x)
{
    int b;
    for (b = 0; x != 0; x >>= 1){
         if (x & 01) b++;
    }
    return b;    
}


/* with x &= (x – 1) */

int bitcount(unsigned x){
    int b;
    for (b = 0; x != 0; x &= (x-1)){
        b++;
    }
    return b;
}
