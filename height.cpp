#include<stdio.h>
#include<conio.h>
main()
{
	float feet1,feet2,inch1,inch2;
	float feet3,inch3;
	printf("Enter height in feet of two people:");
	scanf("%d%d%d",&feet1,&feet2);
	printf("Enter height in inch of two people:");
	scanf("%d%d%d",&inch1,&inch2);
	feet3=feet1+feet2;
	inch3=inch1+inch2;
	if(inch3>12)
	{
		feet3=feet3+feet1;
		inch3=inch3-12;
	}
}
