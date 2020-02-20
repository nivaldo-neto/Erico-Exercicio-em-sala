#include <stdio.h>

int main()
{
		int mes, dia, ano;
		printf("Digite uma data");
		scanf("%d%*c%d%*c%d",&dia, &mes, &ano);
		printf("dia=%d;\nMes=%d;\nAno=%d", dia, mes, ano);
		return 0;
}
