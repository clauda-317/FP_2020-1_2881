#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char *argu[]){
	//asignamos variables a ingresar 
	float num1, num2;
	//asignamos valores 
	num1=atof(argu[1]);
	num2=atof(argu[2]);
	//se imprime el resultado 
	printf("%.2f\n", pow (num1, num2));
	return 0;
}
