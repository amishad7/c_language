#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	clrscr();
	printf("Enter value : ");
	scanf("%d",&a);
	if(a>0)
	{
	 printf("\nIt's postive number");
	}
	else if(a==0)
	{
	 printf("\nIt's Nuetral number");
	}
	else
	{
	 printf("\nIt's Negetive number");
	}
	getch();
}