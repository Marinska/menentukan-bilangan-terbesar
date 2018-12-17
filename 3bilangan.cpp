#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Masukan bilangan pertama : ");
	scanf("%d",&a);
	printf("Masukan bilangan kedua : ");
	scanf("%d",&b);
	printf("Masukan bilangan ketiga : ");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("Bilangan terbesar dari ketiga bilangan adalah %d",a);
		}else{
			printf("Bilangan terbesar dari ketiga bilangan adalah %d",c);
		}
	}else{
		if(b>c)
		{
			printf("Bilangan terbesar dari ketiga bilangan adalah %d",b);
		}else{
			printf("Bilangan terbesar dari ketiga bilangan adalah %d",c);
		}
	}
}
