#include<stdio.h>
#include<conio.h>
main()
{
	char C1;
	printf("Enter a character:");
	scanf("%c",&C1);
	if((C1=='a')||(C1=='e')||(C1=='i')||(C1=='o')||(C1=='u')||(C1=='A')||(C1=='E')||(C1=='I')||(C1=='O')||(C1=='U'))
	{
		printf("Character is vowel");
	}
	else
	{
		printf("Character is not vowel");
	}
	getch();
}
