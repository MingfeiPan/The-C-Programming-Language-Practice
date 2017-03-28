
void get(){
	if(sp > 0){
		printf("top one is %g\n", val[sp-1]);
	}else{
		printf("empty\n");
	}
	return;
}

void copy(){
	double temp = pop();
	push(temp);
	push(temp);
}

void swap(){
	double temp1 = pop();
	double temp2 = pop();
	push(temp1);
	push(temp2);
}

void clear(){
	while(sp >= 0){
		val[sp--] = null;
	}
}
