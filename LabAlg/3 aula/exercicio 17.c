/* 17- Ler dois valores inteiros para as vari�veis A e B, efetuar a troca dos valores de modo que a 
vari�vel A passe a possuir o valor da vari�vel B, e a vari�vel B passe a possuir o valor da vari�vel 
A. Apresentar os valores trocados. */



int main() 
{
	int a, b, c;
	
	scanf ("%i", &a);
	scanf ("%i", &b);
	
	c = b;
	b = a;
	a = c;
	
	printf("valor de %i", a);
	printf("valor de %i", b);
	return 0;
}  
