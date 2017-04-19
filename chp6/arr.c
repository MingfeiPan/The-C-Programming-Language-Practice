#include <stdio.h>


int main(){
	
	int arr[10] = {1,2,2,3,3,4,4,4,5,5};
	int size = 10;
	int ret[10];
	int i = 0;

	while(i<size){
		ret[i++] = -1;
	}
	for(i = 0;i < size; i++){
		ret[arr[i]] = arr[i];
	}
	for(i = 0;i < size; i++){
		if(ret[i] > 0)
		printf("%d\n", i);
	}
	return 0;

}
