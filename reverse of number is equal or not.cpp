/*Lab8*/
/*Wap to find whether the reverse of threee digit numbers is equal or not*/
#include<stdio.h>
#include<conio.h>
main()
{
	int a,a1,a2,a3,temp;
	printf("Enter number:");
	scanf("%d",&a);
	temp=a;
	a1=a%10;
	a=a/10;
	a2=a%10;
	a=a/10;
	
	a3=a1*100+a2*10+a;
	if(a3==temp)
	{
		printf("the reverse is equal to previous number");
	}
	else
	{
		printf("the reverse is not equal to its previous number");
	}
	getch();
}
