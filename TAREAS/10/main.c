#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc,char* argu[]){
    //declaro las variables
    int n1, n2, n3, h, k;
    float i, l, j, x, y=1, resultado, m;
    //Las convierto de char a int
    n1= atoi(argu[1]);
    h=n1;
    n2= atoi(argu[2]);
    j=n2;
    n3= atoi(argu[3]);
    k=n3;
    //reviso si es un numero imaginario o no
    x = j*j;
    l = 4*h*k;
    x = x - l;
    if(x==0){
        j=-j;
        h=2*h;
        resultado=j/h;
        printf("%.2f\n", resultado);
    }
    else{
    if(x>=0){
        h=2*h;
        y=sqrt(x);
        y=y/h;
        j=-j;
        j=j/h;
        resultado=j+y;
        printf("%.2f\n", resultado);
        resultado=j-y;
        printf("%.2f\n", resultado);
    }    
    else{
        h=2*h;
        x= -x;
        y=sqrt(x);
        y=y/h;
        j=-j;
        j=j/h;
        printf("%f+%.2f i\n", j, y);
        printf("%f-%.2f i\n", j, y);
    }
    }
    return 0;
}
