#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float mensalidade, transporte, alimentacao, percentualdesconto, valordesconto, customensal = 0.0;
	
	//entrada
	printf("Insira o valor da mensalidade:");
	scanf("%f", &mensalidade);
	printf("Insira o valor do transporte:");
	scanf("%f", &transporte);
	printf("Insira o valor da alimentacao:");
	scanf("%f", &alimentacao);
	printf("Insira o percentual de desconto:");
	scanf("%f", &percentualdesconto);
	
	//processamento
	valordesconto = (mensalidade * percentualdesconto) / 100;
	customensal = (mensalidade - valordesconto) + transporte + alimentacao;
	
	//saida
	printf("O custo mensal com a facul e: %3.2f. \n", customensal);
	
	
	return 0;
}
