#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argu[]){
	int n;
	n=atoi(argu[1]);
	if (n%2==0){
		printf("1\n");
	}
	else {
		printf("0\n");
	}
	return 0;
}
