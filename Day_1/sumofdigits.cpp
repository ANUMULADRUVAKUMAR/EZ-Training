#include<stdio.h>
main()
{
	int n,z,k,d;
	printf("Enter n value");
	scanf("%d",&n);
	d=n;
	while(n>0)
	{
		k=n%10;
		z=z+k;
		n=n/10;
	}
	printf("%d",z);
	z=0;
	for(;d>0;d=d/10)
	{
		k=d%10;
		z=z+k;
	}
	printf("\n%d",z);
}
