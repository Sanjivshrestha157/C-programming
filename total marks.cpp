#include<stdio.h>
#include<conio.h>
main(){
	float s1,s2,s3,s4,s5,s6,s7,average,p,t=700,t1;
	printf("Enter a marks of 7 subjects:\n");
	scanf("%f%f%f%f%f%f%f",&s1,&s2,&s3,&s4,&s4,&s5,&s6,&s7);
	average=(s1+s2+s3+s4+s5+s6+s7)/7;
	t1=s1+s2+s3+s4+s5+s6+s7;
	p=(t1/t)*100;
	printf("Total marks is %f\n",t1);
	printf("Average is %f\n",average);
	printf("percentage is %f\n",p);
	getch();
}
