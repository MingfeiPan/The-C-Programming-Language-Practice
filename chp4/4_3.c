/*
 * should include math.h for fmod()
 * mod code
 */

case '%':
	op2 = pop();
	if(op2){
		push(fmod(pop, op2));
	}
	else{
		printf("Error: Division by zero!\n");
	}
	break;

