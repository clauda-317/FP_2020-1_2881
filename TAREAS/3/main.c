#include <stdio.h>
#include <stdlib.h>

int main(){
	float a, b, c;
	printf("ingrese el primer numero\n");
	scanf("%f", &a);
	printf("ingrese el segundo numero\n");
	scanf("%f", &b);
	
		c=a+b;
		printf("suma = %.2f\n", c);
		c=a-b;
		printf("Resta = %.2f\n", c);
		c=a*b;
		printf("Multiplicacion = %.2f\n",c);
		c=a/b;
		printf("Division = %.2f\n",c);	

	return 0;
}
