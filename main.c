#include<stdio.h>
int main(){
<<<<<<< HEAD
	int n1, n2, B;
=======
	int n1, n2, A;
>>>>>>> 61a543b6c227a4404dd7b74c607a7a5d1eb18eec
	int res;
	//entrada
	printf("Digite o primeiro numero inteiro:");
	scanf("%d",&n1);
	printf("Digite o segundo numero:");
	scanf("%d",&n2);
	printf("Digite 0 para soma e 1 para subtração:");
	scanf("%d",&n);
	switch(n){
	case 0:
		printf("Soma: %d\n",n1+n2);
		break;
	case 1:
		printf("função de subtração escolhida!\n");
		res = n1 - n2;
		printf("O resultado da subtração é de : %d\n", res);

		break;
	default: break;
	}
	return 0;
}
