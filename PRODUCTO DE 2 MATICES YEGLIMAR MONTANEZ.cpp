#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int A[100] [100], B[100][100], C[100][100];
	int fila1, fila2, columna1, columna2;
	
	printf("Por favor, ingresa el numero de filas para tu primera matriz:\n");
	scanf("%i", &fila1);
	
	printf("Por favor, ingresa el numero de columnas para tu primera matriz:\n");
	scanf("%i", &columna1);
	
	printf("Por favor, ingresa el numero de filas para tu segunda matriz:\n");
	scanf("%i", &fila2);
	
	printf("Por favor, ingresa el numero de columnas para tu segunda matriz:\n");
	scanf("%i", &columna2);
	
	//Es necesario saber si las matrices seran compatibles
	
	if(columna1==fila2){
     //Pedir al usuario que ingrese las matrices 
     
		//primera matriz
		
		for(int i=0;i<fila1;i++){
			for(int j=0;j<columna1;j++){
				printf("Indica el valor de tu primera matriz A[%i][%i]\n", i+1, j+1);
				scanf("%i",&A[i][j]);
			}
		printf("\n");	
		}
		
		//segunda matriz
		
		for(int i=0;i<fila2;i++){
			for(int j=0;j<columna2;j++){
				printf("Indica el valor de tu segunda matriz B[%i][%i]\n", i+1, j+1);
				scanf("%i",&B[i][j]);
			}
		printf("\n");
		}
		
		printf("\n");
		
	//Imprimir
	
	     //primera matriz
	     
		for(int i=0;i<fila1;i++){
			for(int j=0;j<columna1;j++){
			printf("El valor del lugar de A[%i][%i]=%i\n",i+1,j+1,A[i][j]);
			}
			printf("\n");
		}
		
	printf("\n");
		
	     //segunda matriz
		for(int i=0;i<fila2;i++){
			for(int j=0;j<columna2;j++){
			printf("El valor del lugar de B[%i][%i]=%i\n",i+1,j+1,B[i][j]);
			}
			printf("\n");
		}
		
	printf("\n");
	
	//MATRIZ RESULTANTE
	
	     for(int i=0; i<fila1; i++)
		     for(int j=0; j<columna2; j++)
		     C[i][j]=0; //se inicia en 0 para multiplicarla
		     
      	for(int i=0; i<fila1; i++)
		     for(int j=0; j<columna2; j++)
			    for(int x=0; x<columna1; x++)
			    	C[i][j]=C[i][j]+A[i][x]*B[x][j];  //se mantienen fijas las filas A y fijas las columnas de B 
				       
		   printf("\n");
		   
	     for(int i=0;i<fila1;i++){
			for(int j=0;j<columna2;j++){
			printf("El valor del lugar de C[%i][%i]=%i\n",i+1,j+1,C[i][j]);
			}
			
			printf("\n");	
		}	
	}else printf("ERROR, no son compatibles\n");

		return 0;
	}

	

