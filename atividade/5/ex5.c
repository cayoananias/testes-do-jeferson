#include <stdio.h>
#include <stdlib.h>

void main (){
	int celcius;
	int faren;
	printf("Digite a temperatura em celcius:\n");
	scanf("%d",&celcius);
	faren = celcius * 9/5 + 32;
	printf("temperatura em fahrenheint:%d",faren);

}
