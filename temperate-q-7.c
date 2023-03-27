#include<stdio.h>

main()
{
	int a=0,b=1,c=0,d,n;
	printf("Enter Number=");
	scanf("%d",&n);
	
	 
	 while(a<n)
	 {
	 	printf("%d",a);
	 	c=a+b;
	 	a=b;
	 	b=c;
	 }
}
