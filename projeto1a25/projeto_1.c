#include <stdio.h>
#include <stdio.h>

void main(){
	int numero1;
	int numero2;
	int resultado;
	printf("digite um numero: \n");
	scanf("%d",&numero1);
	printf("digite outro numero: \n");
	scanf("%d",&numero2);
	resultado = numero1+numero2;	
	if(resultado>10)
	printf("o resultado da soma é maior que 10");
	} else {
		printf("resultado menor ou igual a 10\n",resultado) ;
}
