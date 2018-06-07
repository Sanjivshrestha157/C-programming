/*WAP to implement login scenario of an ATM.The program should ask the user to enter the pin number until pin is correct, once the pin number is correct display the welcome msg to user.Pin number is 1234*/
/*Lab 9*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int p,count=0;
	do
	{
	 system("cls");
	 if(count>0)
	 {
	 	printf("Invalid pin");
	 }
	 printf("\nEnter your pin number:");
	 scanf("%d",&p);
	 count++;
	}while(p!=1234&&count<3);
	system("cls");
	if(p==1234)
	{
	 printf("Welcome");
	}
	else=
	{
		printf("You have entered the pin wrong too many times");
	}
	getch();
} 
