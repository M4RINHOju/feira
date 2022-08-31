#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//declaracao variaveis
	float n1 = 0.0;
	float n2 = 0.0;
	float m = 0.0;
	
	//entrada
	printf("Calculadora foda \n");
	printf("Insira a primeira nota: ");
	scanf("%f", &n1);
	printf("Insira a segunda nota:");
	scanf("%f", &n2);
	
	//processamento
	m = (n1 + n2) / 2;
	
	//saida
	printf("A media sera exibida: \n");
	printf("A media e: %3.1f \n", m);
	printf("A soma de %3.1f com %3.1f divido por 2 e %3.1f \n", n1, n2, m);
	
	system("pause");
	
		
	return 0;
}
