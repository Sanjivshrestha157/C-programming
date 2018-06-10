/*lab 10*/
#include<stdio.h>
#include<conio.h>
main()
{
	int m=1,prod=1;
	while(m<=5)
	{
		prod=prod+m;
		printf("%d\t%d\n",m,prod);
		m++;
	}
	getch();
}
