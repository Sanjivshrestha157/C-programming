#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	char ch;
	printf("Enter a number:");
	scanf("%d",&a);
	printf("Enter a character:");
	//ch=getch();//
	scanf("%c",&ch);
	printf("\nthe charcter you entered is %c",ch);
	getch();
}
