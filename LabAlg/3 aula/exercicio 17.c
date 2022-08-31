/* 17- Ler dois valores inteiros para as variáveis A e B, efetuar a troca dos valores de modo que a 
variável A passe a possuir o valor da variável B, e a variável B passe a possuir o valor da variável 
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
