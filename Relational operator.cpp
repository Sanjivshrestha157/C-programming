#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	printf("Enter a value of a:");
	scanf("%d",&a);
	printf("Enter a value of b:");
	scanf("%d",&b);
	printf("\n%d<%d is %d",a,b,a<b);
    printf("\n%d>%d is %d",a,b,a>b);
	printf("\n%d>=%d is %d",a,b,a>=b);
	printf("\n%d<=%d is %d",a,b,a<=b);
	printf("\n%d==%d is %d",a,b,a==b);
	printf("\n%d!=%d is %d",a,b,a!=b);
    getch();
}
