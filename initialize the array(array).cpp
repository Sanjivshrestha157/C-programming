/*WAP to replace all occurence of element old with new in array where old and new are input from user and initialize the array with following value.
1 5 6 3 5 2 8 5 */
#include<stdio.h>
#include<conio.h>
main()
{
	int n,num[8]={1,5,6,3,5,2,8,5},i,n2;
	printf("Enter old and new:");
	scanf("%d%d",n,n2);
	for(i=0;i<n;i++)
	{
		if(n==num[i])
		{
			num[i]=n2;
		}
	}
	for(i=0;i<8;i++)
	{
		printf("new number is %d",num[i]);	
	}
	getch();
}
