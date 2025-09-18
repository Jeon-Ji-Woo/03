#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char c;
	
	printf("enter a character :");
	scanf("%c", &c);
	
	char next = c + 1;
	printf("The next character of %c is %c\n", c, next);
	
	return 0;
}
