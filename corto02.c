#include <stdio.h>

int main(){
		
			// int vector[5] = {0,1,2,3,4};
			//variables
			int *puntero;
			int tam, b;
			int vector[tam], i;
			//llenado de vector
			printf("ingrese el tamaño del vector");
			scanf("%i",&tam);
			for (i=0;i<tam;i++){
				printf("ingrese el elemento\n");
				scanf("%d",&b);
				vector[i]=b;
	} 
			//impresion de vector atraves de puntero
			puntero = vector;		
			for(i=0;i<tam;i++){
			printf("dato %i \t",*puntero);
			printf("\ndireccion %p\n",puntero);
			puntero++;
			
		}
	}

