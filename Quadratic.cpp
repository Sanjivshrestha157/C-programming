#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){
	float a,b,c,x1,x2,S1;
	printf("Enter a value of a:");
	scanf("%f",&a);
	printf("Enter a value of b:");
	scanf("%f",&b);
	printf("Enter a value of c:");
	scanf("%f",&c);
	S1=sqrt((b*b)-(4*a*c));
	x1=(-b+S1)/(2*a);
	x2=-(b-S1)/(2*a);
	printf("The value of roots are %f and %f",x1,x2 );
	getch();
}
