#include<stdio.h>
main()
{
	int a[10][10],i,j,n;
	printf("\nEnter the size of matrix");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	for(j=0;j<n;j++)
	{
		for(i=(n-1);i>=0;i--)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
