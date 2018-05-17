/*Lab 7*/
/* Wap to convert case of character from user*/
#include<stdio.h>
#include<conio.h>
main()
{
	int ch;
	printf("\nEnter character:");
	scanf("%c",&ch);
	if((ch>='a')&&(ch<='z'))
	{
	ch=ch-32;
	}
	else if((ch>='A')&&(ch<='Z'))
	{
	ch=ch+32;
    }
    printf("output character is %c",ch);
    getch();
}
