#include<stdio.h>
fun(int n)
{
	int i,fac=1;

	
	for(i=1;i<=n;i++)
	{
		fac*=i;
	}
	return fac;
}
add(int n,int n1)
{
	return n+n1;
}
main()
{
	printf("%d",fun(5));
	printf("\n%d",add(5,10));
}

