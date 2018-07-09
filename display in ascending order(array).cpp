/*Lab 13
WAP to enter any array of ten element display element in ascending order*/
#include<stdio.h>
#include<conio.h>
main()
{
	int a[10]={5,2,1,10,3,4,6,9,7,8},i,n=10,j;
	for(j=1;j<n;j++)
	{
		for(i=0;i<9;i++)
		{
			if(a[i]>a[i+1])
			{
				a[i]=a[i]-a[i+1];
				a[i+1]=a[i+1]+a[i];
				a[i]=a[i+1]-a[i];
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("array element a[i]=%d\n",a[i]);
	}
	getch();
}
