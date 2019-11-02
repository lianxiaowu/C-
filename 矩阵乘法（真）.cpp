#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int chengfa(int a[10][10], int b[10][10],int i,int j,int n)
	{
		int ic,sum;
		int c[10][10] = {0};
		for (ic = 0; ic < n; ic++)
		{
			c[i][j] = c[i][j] + a[i][ic] * b[ic][j]; 			
		}

		return c[i][j];
	}

int randb(int min,int max)
{
	double scaled=(double)rand()/RAND_MAX;
	return ((max-min)+1)*scaled+min;
}
int main()
{
	int n,min,max,i,j;
	srand(time(NULL));
	int a[10][10],b[10][10],c[10][10];
	printf("input n,min,max(11>n>4):\n");
	scanf("%d%d%d",&n,&min,&max);
	printf("\nA\n");
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			a[i][j]=randb(min,max);
			printf("%5d",a[i][j]);			
		}	
	}
	printf("\nB\n");
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			b[i][j]=randb(min,max);
			printf("%5d",b[i][j]);			
		}	
	}
	printf("\n经计算得到C矩阵为(C=A X B)：\nC\n");
	for (i = 0; i < n; i++)
	{
		printf("\n");
		for (j= 0; j < n; j++)
		{
			c[i][j] = chengfa(a,b,i,j,n);
			printf("%5d", c[i][j]);
		}
	}
	getchar();
	getchar();

}
