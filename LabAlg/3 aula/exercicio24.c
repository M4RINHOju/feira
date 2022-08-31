/*24-  A  padaria  Docinho  de  Coco  vende  uma  certa  quantidade  de  pães  franceses  e  uma 
quantidade de broas a cada dia. Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final 
do dia, o dono quer saber quanto arrecadou com a venda dos pães e broas (juntos), e quanto 
deve guardar numa conta poupança (10% do total arrecadado). Você foi contratado para faz er 
os cálculos para o dono. Com base nestes fatos, faça um programa para ler as quantidades de 
pães e de broas, e depois calcular os dados solicitados. */

int main()
{
	int paes, broa, valor, poupanca;
		scanf ("%i", &paes);
		scanf ("%i", &broa);
	
	valor = paes*0.12 + broa*1.5;
	poupanca = valor*0.1;
	
	printf("total das vendas: %f\n", valor);
	printf("total guardado: %f\n", poupanca);
	
	
	return 0;
}
