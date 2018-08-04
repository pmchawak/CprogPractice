#include<stdio.h>
void main()
{
	int a, isum = 0;
	printf("enter a number");
	scanf_s("%d", &a);
	while (a)
	{
		isum = isum + a;
		printf("enter a number");
		scanf_s("%d", &a);
		if(a==0)
		{
			break;
		}

	}
	printf("the sum of all the numbers you entered is %d", isum);

	_getch();
}