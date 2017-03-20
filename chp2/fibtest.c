/* o(n) time com, o(1) space com
 * fibs
 */

#include <stdio.h>

int fib(n){
    int fibs[3] = {0,1,0};
    for(int i = 0; i <= n; i++){
    	fibs[2] = fibs[0] + fibs[1];
	fibs[0] = fibs[1];
	fibs[1] = fibs[2];
    }
    return fibs[2];
}

int main(){
    printf("%d\n", fib(5));
    return 0;
}
