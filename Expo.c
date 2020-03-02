#include <stdio.h>
int main(int argc, char *argv[])
{
		int base, exp, resultado;
		base = atoi(argv[1]);
		exp = atoi(argv[2]);

		for (resultado = 1; exp >= 1; --exp){
			resultado = resultado * base;
		}
		

		printf("O resultado é:%d", resultado);
		return 0;
}
