#include<stdio.h>
void main()
{
	int ino, isum = 0, idigit;
	printf("\n enter number ");
	scanf_s("%d", &ino);
	
	{
		while (ino)
		{
			idigit = ino % 10;
			ino = ino / 10;
			isum = isum + idigit;
		}
		printf("\n sum of the digits of the entered no is %d", isum);
	
	}

	getch();

}