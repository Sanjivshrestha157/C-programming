/*for(initialization;test condition;increment/decrement*/
/*Lab 9*/
/*Wap to print all alphabet except vowels */
#include<stdio.h>
#include<conio.h>
main()
{
	char ch;
	for(ch='a';ch<='z';ch++)
	{
		if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'))
		{
		}
		else
		{
			printf("%c\n",ch);
		}
	}
	getch();
}
