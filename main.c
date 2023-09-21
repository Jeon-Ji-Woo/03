#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	char c;
	
	printf("input a charcter");
	scanf("%c", &c);
	
	printf("the next charcter of &c (&d) is &c (&d)\n",c,c,c+1,c+2);
	
	system("PAUSE");
	return 0;
	

}
