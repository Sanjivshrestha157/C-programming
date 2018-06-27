/*Lab 11
Nested Loop*/€
#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,j;
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
}
