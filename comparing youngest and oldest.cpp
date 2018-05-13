#include<stdio.h>
#include<conio.h>
main()
/*lab 6 journey begins*/
{
	int age1,age2,age3;
	int young,old;
	printf("Enter ages of three people:");
	scanf("%d%d%d",&age1,&age2,&age3);
	young=age1<age2?(age1<age3?age1:age3):(age2<age3?age2:age3);
	old=age1>age2?(age1>age3?age1:age3):(age2>age3?age2:age3);
	printf("%d is the youngest\n",young);
	printf("%d is the oldest\n",old);
	getch();
}
