#include<stdio.h>
#include<conio.h>
main()
{
	float a;
	printf("Enter a number:");
	scanf("%f",&a);
	if(a<0)
	{
		a=-a;
    }
	printf("the absolute value is %f",a);
	getch();
	}
