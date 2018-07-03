/*Lab 12
WAP to print the reverse of numbers stored in a array.*/
#include<stdio.h>
#include<conio.h>
main()
{
	int N[5],n,i;
	printf("How many numbers:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter number:");
		scanf("%d",&N[i]);
	}
	for(i=4;i>=0;i--)
	{
		printf("%d\t",N[i]);
	
	}
	getch();
}
