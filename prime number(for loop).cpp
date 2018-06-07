/*Lab 9*/
/*prime number*/
#include<stdio.h>
#include<conio.h>
main()
{
	int a,i,count=0;
	printf("Enter a number:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			count++;
	    }
	}
		if(count==2)
			{
				printf("It is a prime number");
			}
		else
			{
				printf("composite");
			}
	getch();
}
