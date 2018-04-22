#include<stdio.h>
#include<conio.h>
main()
{
	int a,r;
	printf("Enter a value of a:");
	scanf("%d",&a);
	r=a%2;
	if(r==0)
	{
		printf("%d is even",a);
	}
	{
		printf("%d is odd",a);
	}
	getch();
}
