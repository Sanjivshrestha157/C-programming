/*Lab13
WAP to count the total number of even and odd elements of an array also print the sum of even and odd seperately.*/
#include<stdio.h>
#include<conio.h>
main()
{
	int i,n=8,a[8]={3,5,8,7,6,10,13,17},odd=0,even=0,sum1=0,sum2=0;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			even++;
			sum1+=a[i];
		}
		else
		{
			odd++;
			sum2+=a[i];
		}
	}
	printf("The number of even elements is %d\n",even);
	printf("The number of odd elements is %d\n",odd);
	printf("Sum of even is %d\n",sum1);
	printf("Sum of odd is %d",sum2);
	getch();
}
