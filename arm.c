#include<stdio.h>
#include<conio.h>
void main()
{
	int ino, isum = 0, idigit, p;
	printf("\n enter number");
	scanf_s("%d",&ino);
	p = ino;
	while (ino)
	{
		idigit = ino % 10;
		ino = ino / 10;
		isum = isum + (idigit*idigit*idigit);
	}
	if (isum == p)
	{
		printf("\n this is an armstrong number");
	}
	else
	{
		printf("this is not an armstrong number");
	}




	_getch();

}