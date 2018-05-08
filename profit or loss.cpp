#include<stdio.h>
#include<conio.h>
main()
{
	float cp,sp,result;
	printf("Enter values of cp and sp:");
	scanf("%f%f",&cp,&sp);
	result=cp-sp;
	if(result>=0)
	{
		printf("loss is %f",result);
    }
    else
    {
    	printf("profit is %f",-result); 
	}
	getch();
	}
