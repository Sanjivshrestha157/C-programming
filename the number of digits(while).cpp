/*Wap to count the number of digits of any number*/
/*lab 9*/
#include<stdio.h>
#include<conio.h>
main()
{
	int n,i;
	printf("Enter any number:");
	scanf("%d",&n);
	i=0;
	while(n>0)
	{
		n=n/10;
		i=++i;
	}
	printf("the number of digits is %d",i);
	getch();
}
