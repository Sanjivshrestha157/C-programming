/*Lab 12
Wap to print total marks,average marks using array*/
#include<stdio.h>
#include<conio.h>
main()
{
	int sub[5],i,n,sum=0,average;
	printf("Enter the size of number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter marks:");
		scanf("%d",&sub[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+sub[i];
	}
	average=sum/n;
	printf("\ntotal is %d\n",sum);
	printf("average is %d\n",average);
	getch();
	
}
