#include <stdio.h>
#include <stdlib.h>

void main () {
	int nota1;
	int nota2;
	int nota3;
	int media;
printf("\nDigite a primeira nota:\n");
scanf("%d",&nota1);
printf("\nDigite a segunda nota:\n");
scanf("%d", &nota2);
printf("\nDigite a terceira nota:\n");
scanf("%d", &nota3);
media = (nota1+nota2+nota3) /3;
if(media>=5){
	printf("Media:%d",media);
	printf("\nAluno aprovado\n");
}
else{ 
	printf("\nMedia:%d",media);
	printf("\nAluno em recuperação");
}
}

