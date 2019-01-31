#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int vector[100];
	float i;
	float num; 
	float sum = 0;
	float media = 0.0;
	float Min = 99999;
	float Max = -99999;
	float ran;
	printf(" cuantos son los valores que desea: ");
	scanf("%d",&vector[100]);
	{
		
		for(i=1; i<=vector[100]; i=i+1)
		{
			printf("\n Inserte los valores que desea: ");
			scanf("%f",&num);
	    	
			if(Min>num)
			{
				Min=num;
			}
			if(Max<num)
			{
				Max=num;
			}
			
		}
		
	}
	sum = sum + num;
	media = sum /vector[100];
	ran=Max-Min;
	printf("\n el promedio es: %.2f",media);
	printf("\n el valor minimo es: %.2f",Min);
	printf("\n el valor maximo es: %.2f",Max);
	printf("\n el rango es: %.2f",ran);
	
	return 0;
}
