#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void){
	int x, y;
	float f;
	x = 27; y = 5;
	
	f = x/y;
	printf("%.2f\n", f);
	
	f = (float)x/y;
	printf("%.2f\n", f);
	
	printf("%d %d %f", x, y, f);
	
	return 0;
}
