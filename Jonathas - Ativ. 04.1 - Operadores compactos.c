#include <stdio.h>
#include <math.h>

int main ( ) {
	int x, y;
	x = 3;
	y = x * (x+1) * x++;
	printf ("O valor de Y: %d", y); /*valor = 36*/
	
	x = 5;
	y = 3;
	printf ("\n %d %d", y*= x+1);
	return 0;
}
