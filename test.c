#include <stdio.h>
#include <conio.h>

int main(void){
	unsigned char ch;
	int i=0;
	for(ch=0, i=0; ch<255, i<255; ch++, i++){
		printf("%5i %10c\n",i, ch);
		printf("---------------------\n");
	}
	return 0;
}
