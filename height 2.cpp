/*lab 6 3nd one*/
#include<stdio.h>
#include<conio.h>
main()
{
	int feet1,feet2,inch1,inch2;
	int feet3,inch3;
	printf("Enter height in feet of two people:");
	scanf("%d%d",&feet1,&feet2);
	printf("Enter height in inch of two people:");
	scanf("%d%d",&inch1,&inch2);
	inch3=inch1+inch2;
	feet3=feet1+feet2+inch3/12;
	inch3=inch3%12;
	printf("the total height is %d feet %d inch",feet3,inch3);
	getch();
}
