#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int ja, mo;
	
	printf("enter a bunja :");
	scanf("%d", &ja);
	
	printf("enter a bunmo :");
	scanf("%d", &mo);
	
	printf("The result is %f\n", (float)ja/mo);
	
	return 0;
}
