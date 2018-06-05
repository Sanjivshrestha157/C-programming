/*WAP to implement login scenario of an ATM.The program should ask the user to enter the pin number until pin is correct, once the pin number is correct display the welcome msg to user.Pin number is 1234*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int p;
	do
	{
	system("cls");
	printf("Enter your pin number:");
	scanf("%d",&p);
	}while(p!=1234);
	printf("Welcome");
	getch();
}
