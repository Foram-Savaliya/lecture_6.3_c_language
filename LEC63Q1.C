#include<stdio.h>
#include<conio.h>

void main()
{
	int a,num,sum = 0;
	clrscr();
	printf("enter your number: ");
	scanf("%d",&num);
	for(a=1;a<=num;a++)
	{
		printf("%d\n",a);
		sum = sum + a;
	}
	printf("your sum is %d",sum);
	getch();
}