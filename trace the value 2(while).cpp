/*lab 10*/
#include<stdio.h>
#include<conio.h>
main()
{
	int sum=0,counter=7;
	while(counter<=27)
	{
		sum=+counter;
		counter=+3;
		printf("%d\t%d\n",sum,counter);
	}
	getch();
}
