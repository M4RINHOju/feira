/*29- A lanchonete Boca Nervosa vende apenas um tipo de sanduíche, cujo recheio inclui duas 
fatias de queijo, uma fatia de presunto e uma rodela de hambúrguer. Sabendo que cada fatia 
de queijo ou presunto pesa 50 gramas, e que a rodela de hambúrguer pesa 100 gramas, faça 
um  programa  em  que  o  dono  forneça  a  quantidade  de  sanduíches  a  fazer,  e  a  máquina 
informe as quantidades (em quilos) de queijo, presunto e carne necessários para compra. */

/*0.05kg presunto
0.1 kg queijo
0;1 kg hamburguer */

int main()
{
	
	float queijo, presunto, carne;
	int lanche;
	
	printf("entre com o total de sanduiches: ");
	scanf("%i", &lanche);
	
	queijo = lanche*0.1;
	presunto = lanche*0.05;
	carne = lanche*0.1;
	
	printf("%f kg de queijo", queijo);
	printf("%f kg de presunto", presunto);
	printf("%f kg de carne", carne);
	
	return 0;
	
}
