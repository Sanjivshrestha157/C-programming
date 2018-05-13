/*lab 6 2nd one*/
#include<stdio.h>
#include<conio.h>
main()
{
	int age1,age2,age3;
	int young=999,old=0;
	printf("Enter ages of three people:");
	scanf("%d%d%d",&age1,&age2,&age3);
	if(age1>old)
	 {
		old=age1;
 	 }
	if(age2>old)
	 {
		old=age2;
	 }
	if(age3>old)
	 {
		old=age3;
	 }
	if(age1<young)
	 {
		young=age1;
	 }
		if(age2<young)
	 {
		young=age2;
 	 }
		if(age3<young)
	 {
		young=age3;
	 }
	 printf("%d and %d are oldest and young",old,young);
	 getch();
}
