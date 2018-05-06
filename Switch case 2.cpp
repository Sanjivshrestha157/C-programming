#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int a,b,c,s,s1,ch;
	float area;
	printf("\n**menu**");
	printf("\n1.Circle");
	printf("\n2.Rectangle");
	printf("\n3.Square");
	printf("\n4.Triangle");
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Enter radius:");
	    	scanf("%d",&a);
	    	area=3.14*a*a;
			break;
		case 2:
			printf("Enter length and breadth:");
			scanf("%d%d",&a,&b);
			area=a*b;
			break;
		case 3:
			printf("Enter length");
			scanf("%d",&a);
			area=a*a;	
			break;
		case 4:
			printf("Enter three sides:");
			scanf("%d%d%d",&a,&b,&c);
			s=(a+b+c)/2;
			s1=s*(s-a)*(s=b)*(s-c);
			area=sqrt(s1);
			break;
		default:
			printf("Invalid choice\n");
	}
	printf("area is %f",area);
	getch();
}
