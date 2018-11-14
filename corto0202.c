#include <stdio.h>
int main(){
	int n;
	int datos;
		printf("ingrese un numero de 2 datos");
		scanf("%i",&n);
		
		datos= invertir(n);
	
		printf("numero invertido de 2 datos%i", invertir(n));
}

int invertir(int n){ 
		int invertido; 
			if(n<10){ 
			invertido=n; 
}
		else{ 
		invertido=(n%10)*10+invertir(n/10); 
} 
		return invertido; 
}
