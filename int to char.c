#include<stdio.h>
void main()
{
	int ino;
	char c;
	for (ino = 0; ino <= 255; ino++)
	{
		printf("%d=", ino);
		printf("%c\n", ino);
		if (ino % 10 == 0)
		{
			_getch();
		}
	}
	_getch();
}