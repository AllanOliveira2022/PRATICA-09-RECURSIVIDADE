#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int fatorial(int n){
	if(n == 0) return 1; // if de uma unica linha
	if (n > 0) return fatorial(n-1) *n;// retorno da fun��o recursiva
	return -1;
}
/*
    fun��o : calcular fatorial
    entrada : "n" inteiro
    Sa�da : Fatorial de "n" se "n" > 0 ou -1, se "n"  < 0
*/

int main(){
	setlocale(LC_ALL,"portuguese_brazil");
	int num, res;
	printf("Digite um n�mero : ");
	scanf("%d", &num);
	
	res = fatorial(num); // recebe o retorno da fun��o fatorial, caso o numero seja negativo
	
	if(res < 0){
		printf("Entrada inv�lida ! \n");
	}else{
		printf("O fatorial de %d � : %d",num, fatorial(num));		
	}	

	return 0;
}
