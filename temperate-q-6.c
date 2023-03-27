#include<stdio.h>

main()
{
	int a=1,n,fact=1;
	printf("Enter value of N=");
	scanf("%d",&n);
	 
	 do
	 {
	 	printf("%d\n",a);
	 	fact=fact*a;
	 	a++;
	 }
	 while(a<=n);
	 
	 printf("Factorial of all elements=""%d",fact);
}
