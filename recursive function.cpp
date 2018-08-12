/*Lab 17
recursive function*/ 
#include<stdio.h>
#include<conio.h>
int fact(int a)
{
	if(a==0||a==1)
	{
		return 1;
	}
	else
	{
		return a*fact(a-1);
	}
}

main()
{
	int f=fact(5);
	printf("The factorial of 5 is %d",f);
	getch();
}
