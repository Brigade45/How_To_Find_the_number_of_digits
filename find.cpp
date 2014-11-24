#include<stdio.h>
#include<conio.h>
int basamak_bul();
int main()
{
	basamak_bul();
	_getch();
	return 0;
}

int basamak_bul()
{
	int a,basamak=1;
	printf("Lufen sayiyi giriniz : ");
	scanf_s("%d", &a);
	for (int i = 1; i <= BUFSIZ; i++)
	{
		if (a >= 10)
		{
			a = a / 10;
			basamak = basamak + 1;
		}
	}
	printf("Sayi %d basamaklidir.", basamak);
	return 0;
}
