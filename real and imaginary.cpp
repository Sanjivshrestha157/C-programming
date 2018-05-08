#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	float a,b,c,d,r1,r2;
	printf("Enter values of a,b,c:");
	scanf("%f%f%f",&a,&b,&c);
	d=(b*b)-(4*a*c);
	if(d>0)
	{
	r1=-b+sqrt(d);
	r2=-b-sqrt(d);
		printf("The roots r1 and r2 are %f and %f which is real and unequal",r1,r2);
    }
    else if(d<0)
    {
    	printf("imaginary"); 
	}
	 else
    {
    	r1=-b/(2*a);
		printf("The roots r1 is real and equal %f",r1); 
	}
	getch();
	}
