/*Lab 11
Nested Loop*/
#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,j,k;
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
      	for(k=1;k<i;k++)
		{
			printf("\t");
		} 
	    for(j=i;j<=n;j++)
		{
			printf("%d\t",j);
		} 
		printf("\n");
	}
	getch();
}
