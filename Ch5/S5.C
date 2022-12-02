#include<stdio.h>
#include<conio.h>
main()
{
	char a;
	clrscr();
	printf("Enter M for Monday:\n");
	printf("Enter T for Tuesday:\n");
	printf("Enter W for Wednesday:\n");
	printf("Enter t for Thurday:\n");
	printf("Enter F for Friday:\n");
	printf("Enter S for Saturday:\n");
	printf("Enter s for Sunday:\n");
	printf("Enter your choice : ");
	scanf("%c",&a);
	switch(a)
	{
		case 'M' :
			printf("Monday.");
			break;
		case 'T' :
			printf("Tuesday.");
			break;
		case 'W' :
			printf("Wednesday.");
			break;
		case 't' :
			printf("Thurday.");
			break;
		case 'F' :
			printf("Friday.");
			break;
		case 'S' :
			printf("Saturday.");
			break;
		case 's' :
			printf("Sunday.");
			break;
		default :
			printf("Invalid Input.");
			break;


	}
	getch();
}
