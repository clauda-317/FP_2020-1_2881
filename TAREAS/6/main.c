#include<stdio.h>
#include<stdlib.h>
int main (int argc,char* argu[]){
	int resultado;//resultado es el quese imprimir�
	int argui[argc];// esta sera la lista donde se guardaran los valores enteros 
	// se necesitan dos for, uno para hacer y uno paraexcluir el arg[i]
	for (int i=1;i<argc;i++){
		//el resultado primero sera el neutro multiplicativo
		resultado=1;
		//el otro for hara la operacion sin excluir a ninguno 
		for (int j=1;j<argc;j++){
			//aqui se copia la lista argu[] quees string a argui[]que es int 
			argui[j]=atoi(argu[j]);
			//se sacael resultado sin excluir a argu[i]
			resultado=resultado*argui[j];
		}
		//una vez que se hizo resultadoen el segundo for se excluye a argu[i]
		//con su inverso multiplicativo 
		resultado=resultado/argui[i];
		printf("%i\n",resultado);
	}
	return 0;
	}
