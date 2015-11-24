#include<stdio.h>
#include<stdlib.h>//programa que te de la mediana y los ordene
int numeros[10];
int i=0;
int j=0;
int numero=0;
int mediana=0;
int main() 
{
	printf("INSERTE 10 NUMEROS\n");
	for(i=0;i<10;i++)
{
	printf("DAME EL NUMERO %d:\n",i+1);
	scanf(" %d",&numeros[i]);
}
	for(i=0;i<10;i++)
{
	for(j=0;j<10;j++)
{
	if(numeros[j]<numeros[i])
{
	numero=numeros[j];
	numeros[j]=numeros[i];
	numeros[i]=numero;
}
}
}
	for(i=0;i<10;i++)
{		
	mediana=mediana+numeros[i];
}
	mediana=mediana/10;
	printf("LA MEDIANA ES: %d\n",numeros[mediana]);
	system("PAUSE");
}
