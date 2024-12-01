#include <stdio.h>

int main(void)
{
	char name[50];

	printf("Enter your your first name: ");
	scanf(" %s", name);

	printf("Your first name is %s\n", name);

	return(0);
}
