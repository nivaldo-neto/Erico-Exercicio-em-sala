#include <stdio.h>

int main(int argc, char *argv[])
{
		int n1, n2, n3, media, SC, F;
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		n3 = atoi(argv[3]);
		media = (n1 + n2 + n3)/3;
		if (n1 < 0 || n1 > 10){
			printf("Digite a nota da segunda chamada: ");
			scanf("%d", &SC);
			media = (SC + n2 + n3)/3;
		}else if(n2 < 0 || n2 > 10){
			printf("Digite a nota da segunda chamada: ");
			scanf("%d", &SC);
			media = (n1 + SC + n3)/3;
		}else if (n3 < 0 || n3> 10){
			printf("Digite a nota da segunda chamada: ");
			scanf("%d", &SC);
			media = (n1 + n2 + SC)/3;
		}if (media < 7){
				printf("Você esta reprovado");		
		}else{
			printf("Você esta aprovado!"); 
		}
		
		return 0;
}