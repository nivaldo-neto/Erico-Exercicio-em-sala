#include <stdio.h>
int main(int argc, char *argv[])
{
		int num, resto;
		num = atoi(argv[1]);
		resto = num % 2;

		while(resto){
			if (resto != 0){
				printf("Esse numero é impar e n possui raiz inteira!");
				break;
			}else{
				printf("Sua raiz é:%d", resto);
				break;
			}
		}
		return 0;
}
