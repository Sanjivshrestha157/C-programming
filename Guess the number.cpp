/*WAP named'guess the number'*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a,i=1;
	srand(time(NULL)%100);
	do
	{
		system("cls");
		printf("Enter any number:");
		scanf("%d",&a);	
		printf("%d\n",rand());
		i++;
	}while((a!=55)&i<10);
	getch();
}
