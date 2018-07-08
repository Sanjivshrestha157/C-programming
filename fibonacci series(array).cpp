/*Lab 13
WAP to find fibonacci series in array.*/
#include<stdio.h>
#include<conio.h>
main()
{
	int n=9,a[n]={0,1},i;
	for(i=2;i<n-1;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	for(i=0;i<n;i++)
	{
	printf("fibonacci series[%d]=%d\t",i,a[i]);
    }
	getch();
}
