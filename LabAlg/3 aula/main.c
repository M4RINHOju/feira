#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float c=0.0;
	float c2=4.50;
	float t=0.0;
	float t2=5.00;
	float p=0.0;
	float p2=5.50;
	float v=0.0;
	
	printf ("   ..::sua compra::..\n\n\n");
	printf ("   quantidade de cenoura:");
	scanf ("%f", &c);
	printf ("   quantidade de tomate:");
	scanf ("%f", &t);
	printf ("   quantidade de pepino:");
	scanf ("%f", &p);
	
	v=(c*c2)+(t*t2)+(p*p2);

	printf ("   o valor da sua compra e:%f\n\n", v);
	printf("   ..::Obrigado pela preferencia::..\n\n");
	
	system("pause");
	
	return 0;
}
