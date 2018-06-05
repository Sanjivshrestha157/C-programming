/*WAP to implement login scenario of an ATM.The program should ask the user to enter the pin number until pin is correct, once the pin number is correct display the welcome msg to user.Pin number is 1234*/
/*Lab 9*/
#include<stdio.h>
#include<conio.h>
main()
{
	int p;
	do
	{
	printf("Enter your pin number:");
	scanf("%d",&p);
	}while(p!=1234);
	printf("Welcome");
	getch();
}
