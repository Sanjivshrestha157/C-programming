#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i;
	srand((unsigned)time(NULL));
	for(i=1;i<=10;i++)
	{
		printf("%d\n",rand());
	}
}
