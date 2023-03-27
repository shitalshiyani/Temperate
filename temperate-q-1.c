#include<stdio.h>

main()
{
	char ch,a,z;
	ch='a';
	
	do
	{
		printf("%c=%d\n",ch,ch);
		ch++;
	}
	while (ch<='z');
}
