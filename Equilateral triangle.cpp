#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("Enter a value of a:\n",a);
	scanf("%d",&a);
	printf("Enter a value of b:\n",b);
	scanf("%d",&b);
	printf("Enter a value of c:\n",c);
	scanf("%d",&c);
	if((a==b)&&(b==c))
	{
		printf("The given triangle is equilateral triangle");
	}
	else
	{
		printf("The given triangle is not equilaterl triangle");
	}
	getch();
}
