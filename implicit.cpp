/*Lab 17
different data type and data(implicit or explicit)*/ 
#include<stdio.h>
#include<conio.h>
main()
{
	int a=17,b=5;
	char ch='a';
	char n=a+ch;
	int c=a/b;
	double c1=a/b;
	double d=(double)a/b;
	printf("The value of a and b are %d and %d",a,b);
	printf("\nThe value of ch and n are %c and %c",ch,n);
	printf("\nThe value of c,c1,d are %d,%lf and %lf",c,c1,d);
	getch();
	
}
