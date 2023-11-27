#include<stdio.h>
#include<conio.h>

void main()
{
	int num,i,f=1;
	clrscr();
	printf("enter any no:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("%d\n",i);
		f=f*i;
	}
	printf("your factorial is: %d",f);
	getch();
}