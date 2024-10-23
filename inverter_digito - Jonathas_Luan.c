#include <stdio.h>

int invert(int x){
	if (x == 0){
		return 0;
	}
	printf("%d", x%10);
	return invert(x/10);
}

int main (){
	int num;
	printf ("Digite uma sequencia de numeros para inverte-los: \n");
	scanf ("%d", &num);
	printf ("\nOs numeros invertidos ficam: ");
	invert(num);
	return 0;
}
