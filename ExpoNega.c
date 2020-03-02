#include <stdio.h>
int main(int argc, char *argv[])
{
		int base, exp;
		float resultado;
		base = atoi(argv[1]);
		exp = atoi(argv[2]);

		for(resultado = 1; exp != 0; ++exp){
			resultado = resultado*base;
		}
		resultado = 1/resultado;
		printf("O resultado é:%.2f", resultado);

		return 0;
}
