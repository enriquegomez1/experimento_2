#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char binario[9];
	int indice;
	int resultado=0;
	
	printf("ingrese numero en binario: \n");
	scanf("%s",&binario);
	
	for (indice =0; indice < strlen(binario); indice++)
		if (binario[indice] !='0' && binario[indice]!='1')
		{
			printf("Error: numero diferente.");
			
			return 0;
		}
	for (indice = strlen(binario)-1; indice>=0; indice--)
		if (binario[indice]=='1')
		 resultado = resultado + 1 * pow(2,strlen(binario)-1-indice);
		 
	printf("El resultado es: %d",resultado);
	
	return 0;
}
