#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	char arr[5][20];
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("\n enter %d strings ", i + 1);
		_flushall();
		gets(arr[i]);
	}
	printf("\n your entered strings are:");
	for (i = 0; i < 5; i++)
	{
		printf("\n strings %d:%s", i + 1, arr[i]);

	}
	_getch();
}