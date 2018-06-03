/*WAP to find the sum of all odd numbers in between 500 and 1000*/
/*lab 9*/
#include<stdio.h>
#include<conio.h>
main()
{
	int i,s;
	i=501;
	s=0;
	while(i<=1000)
	{
		s+=i;
		i=i+2;
	}
	printf("sum=%d",s);
	getch();
}
