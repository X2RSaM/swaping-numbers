#include<stdio.h>
main()
{
	int a,b;
	printf("\nEnter the first number:");
	scanf("%d",&a);
	printf("\nEnter the second number:");
	scanf("%d",&b);
	a = a+b;
	b = a-b;
	a = a-b;
	printf("The swaped number are :%d,%d",a,b);
	return 0 ; 
	
}
