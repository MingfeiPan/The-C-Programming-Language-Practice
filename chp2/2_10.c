#include <stdio.h>

/* lower: convert c to lower case; ASCII only */ 
int lower(int c)
{
    if (c >= 'A' && c <= 'Z') return c + 'a' - 'A';
    else return c;
}

int noiflower(int c){
    return c >= 'A' && c <= 'Z' ? c + 'a' - 'A' : c;
}
