/*24-  A  padaria  Docinho  de  Coco  vende  uma  certa  quantidade  de  p�es  franceses  e  uma 
quantidade de broas a cada dia. Cada p�ozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final 
do dia, o dono quer saber quanto arrecadou com a venda dos p�es e broas (juntos), e quanto 
deve guardar numa conta poupan�a (10% do total arrecadado). Voc� foi contratado para faz er 
os c�lculos para o dono. Com base nestes fatos, fa�a um programa para ler as quantidades de 
p�es e de broas, e depois calcular os dados solicitados. */

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
