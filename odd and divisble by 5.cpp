#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	printf("Enter a value a:");
	scanf("%d",&a);
	if((a%2==1)&&(a%5==0))
	{
		printf("%d is odd and divisible by 5",a);
	}
	else
	{
		printf("%d is not odd and not divisible by 5",a);
	}
	getch();
}
