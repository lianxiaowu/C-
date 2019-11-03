#include<stdio.h>
int main()
{
	int yh[20][20]={1};
	int i,j,a;
	printf("ÇëÊäÈëĞĞÊı£º");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		printf("\n");
		for(j=0;j<=i;j++)
		{
			if((i!=0&&j!=0)||i!=j)
			yh[i][j]=yh[i-1][j-1]+yh[i-1][j];
			printf("%4d",yh[i][j]);
		}	
	
	}

}
