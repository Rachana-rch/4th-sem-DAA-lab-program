#include<stdio.h>
main()
{
	int a[10][10],n,i,j,k;
	printf("Enter the no. of vertices:\n");
	scanf("%d",&n);
	printf("Enter values in distance matrix matrix:\n");
	printf("999 for no path\n");
	for (i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(k=1;k<=n;k++)
	{
		for (i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(a[i][j]<a[i][k]+a[k][j])
					a[i][j]=a[i][j];
				else
					a[i][j]=a[i][k]+a[k][j];	
		    }
		}
	}
	printf("The path matrix is: \n");
	printf("MATRIX A \n");
	for (i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}
}
