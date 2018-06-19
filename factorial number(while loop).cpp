/*Lab 10
WAP to find the factorial of any number given user.*/
#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,fact=1;
	i=1;
	printf("Enter any number:");
	scanf("%d",&n);
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("Factorial of %d is %d",n,fact);
	getch();
}
