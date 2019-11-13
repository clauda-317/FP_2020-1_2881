#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main (int argc, char* argu[]) {
	//se declaran las variables
	int n1, x, resultado;
	//convertimos de char a int 
	n1=atoi(argu[1]);
	//guardamos el valor en otra variable para usarla en el while 
	x=n1;
	resultado=0;
	//funcion 
	while(x>0){
		resultado=resultado + x%10;
		x=x/10;
	}
	//imprimimos el resultado
	printf("%i\n", resultado);
	return 0;
}
