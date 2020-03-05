#include <stdio.h>
#include <stdlib.h>

int main()
{
	enum letter{Q = 11, J, K, A}	

	union rank{
		int num;
		enum letter l;
	};
	enum suits{copas, valetis, ouro, paus,espadas};

	struct card{
		union rank r;
		enum suits s;
	};
	
	struct cartas deck[52];

	deck[0].r.num = 2;
	deck[0].s = copas;

	
