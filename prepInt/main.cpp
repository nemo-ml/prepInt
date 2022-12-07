#include <stdio.h>

void printpointer()
{
	int var = 10;
	int* pt;
	pt = &var;

	printf("The address is: %p \n", pt);
	printf("The address is: %d \n", *pt);
}

int main()
{
	printpointer();
}