#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	clrscr();
	printf("Enter two number  :\n");
	scanf("%d%d",&a,&b);
	if(a<b)
	{
	 printf("A is small");
	}
	else if(a==b)
	{
	 printf("equal values ");
	}
	else
	{
	 printf("B is small");
	}
	getch();
}