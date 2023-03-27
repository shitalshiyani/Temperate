#include<stdio.h>

main()
{
	int a,i,temp=0;
	printf("Enter positive number=");
	scanf("%d",&a);
	
	for (i=2; i<a; i++)
	{
	  if (a%i==0)
       {
       	temp=1;
	   }
	   
	}
	
	if(temp==0)
    {
    	printf("%d is a prime number",a);
    }
    
	else
	{
	    printf("%d is not a prime number",a);
	}
	
}
