#include<stdio.h>
#include<conio.h>
main()
{
	float u,t,bill;
	clrscr();
	printf("Enter electricity charges : ");
	scanf("%f",&u);
	if(u<=50)
	{
	       t=u*0.50;
	}
	else if(u<=50 && u>=150)
	{
		t=((u-50)*0.75)+25;
	}
	else if(u<=150 && u>=250)
	{
		t=((u-150)*1.20)+100;
	}
	else
	{
		t=((u-250)*1.50)+220;
	}
	bill=t+(t*0.2);
	printf("Subcharge =",bill);
	getch();
}

