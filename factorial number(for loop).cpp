/*Lab 10
WAP to find the factorial of any number given user.*/
#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,fact=1;
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		printf("i is %d\n",i);
	}
	printf("Factorial of %d is %d",n,fact);
	getch();
}
