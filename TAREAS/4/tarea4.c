#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argu[]){
	//declaramos otra lista para que argu se guarde
	//declaramos la variable suma 
	//argc será igual al numero de argumentos 
	int lista [argc], suma=0;
	//promediose declarar con nuemro real ya que esl resultado puede ser en decimales 
	float promedio;
	//float para copiar argu a la lista 
	//se empieza con 1 y no con 0 ya que argu[0]es ./main 
	for (int i=1;i<argc;i++){
		lista[i]=atoi(argu[i]);
	}
	//for para sumar los elementos de la lista 
	//al principio suma=0 asi que laprimera vez suma=lista[1]
	//si suma =lista[1] lasegynda vez que se haga el proceso sera suma=lista[1]+lista[2] y asi sucesivamente 
	for (int i=1;i<argc;i++){
		suma=suma+lista[i];
	}
	//en promedio se divide a la suma entre argc-1
	//para quitar el ./main y solo cunten los numeros que entran 
	promedio=(float)suma/(argc-1);
	printf("%.2f\n",promedio);
	return 0;
}
