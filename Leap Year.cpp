/* lab 7*/
#include<stdio.h>
#include<conio.h>
main()
{
	int y;
	printf("Enter no. of years:");
	scanf("%d",&y);
	if(y%4==0)
	{
		if(y%100==0)
		{
			if(y%400==0)
			{
				printf("given year is leap year");
			}
			else
			{
				printf("given year is not leap year");
			}
		}
		else
		{
			printf("given year is leap year");
		}
		
	}
	else
	{
	 printf("given year is not leap year");
	}
}
