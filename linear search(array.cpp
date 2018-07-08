/*Lab 13
WAP to implement linear searching in array.*/
#include<stdio.h>
#include<conio.h>
main()
{
	int n,num[6]={5,15,28,33,22,1},i,flag=0;
	printf("Enter the number to be searched:");
	scanf("%d",&n);
	for(i=0;i<6;i++)
	{
		if(n==num[i])
		{
			printf("The linear number searched is %d in %d",num[i],i+1);
			flag=1;
			break;
		}
	}
	if(flag==0)
		{
			printf("Element not found");
		}
	getch();
}
