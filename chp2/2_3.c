/**
 * really stupid one
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int checkhex(char);
int myhextonum(char* s){
    int n = 0;
    int total = strlen(s);
    int length = total;
    int result = 0;
    while(length > 0){
        if(s[total-length] == '0' && (s[total-length+1] == 'x' || s[total-length+1] == 'X')){
	    length = length - 2;
	    continue;
	}
	result += checkhex(s[total - length]) * pow(16, length-1);
	length--;
    }    
    return result;
}

int checkhex(char s){
    int ret;
    switch(s){
    	case 'A' : ret = 10; break;
	case 'a' : ret = 10; break;
	case 'B' : ret = 11; break;
	case 'b' : ret = 11; break;
	case 'C' : ret = 12; break;
	case 'c' : ret = 12; break;
	case 'D' : ret = 13; break;
	case 'd' : ret = 13; break;
	case 'e' : ret = 14; break;
	case 'E' : ret = 14; break;
	case 'f' : ret = 15; break;
	case 'F' : ret = 16; break;
	default: ret = (int)s - 48;
    }
    return ret;
}


int main(){
    char *s = "0x13e";
    int result;
    result = myhextonum(s);
    printf("%d\n", result);
    return 0;
}
