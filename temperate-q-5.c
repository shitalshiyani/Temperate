#include<stdio.h>

main()
{
	int n,temp,a,b=0;
	printf("Enter Number=");
	scanf("%d",&n);
	
	temp=n;
	while(n!=0)
	{
		a=n%10;
		b=b*10+a;
		n=n/10;
	}
	printf("Reverse=%d",b);
	if(temp==b)
	{
		printf("\nPelindrom");
	}
	else
	{
		printf("\nNot Pelindrom");
	}
}
