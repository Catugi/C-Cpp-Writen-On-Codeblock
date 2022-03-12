#include "recursion.h"
#include <stdio.h>


void fun(int n){
	/*Nesta função primeiro imprime depois chama a função
	de novo. Neste caso o resultado seŕa imprime f(n) e chama f(n-1)*/
	if (n>0)
	{
		fprintf(stdout, "%d\n ", n);
		fun(n-1);
	}
}

void fun2(int n){
	/*Nest a função primeior chama depois imprime. Neste caso, as imprissões só serão feitas
	após as chamadas serem concluídas. Chama  f(n), chamaf(n-1) chama f(n-n) e imprime f(n-n),
	f(n-2) etc*/
	if (n>0)
	{
		fun2(n-1);
		fprintf(stdout, "%d ", n);
	}
}
/*
void fun3(int n){
	if(n>0){
		//1. chamada->Ascendente
		fun3(n-1);
		//2. Retorno->Descendente
	}
}
*/
