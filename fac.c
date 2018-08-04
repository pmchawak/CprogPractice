#include<stdio.h>
int main()
{
	int a, b, c = 1;
	printf("enter value for the factorisation process");
	scanf_s("%d", &b);
	for (a = 1; a <= b; a++)
	{
		c = a * c;
	}
	printf("the value is %d", c);

	getch();

}