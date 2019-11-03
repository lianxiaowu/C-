#include<stdio.h>
#include<string.h>
int main()
{
	char na[20][20];
	int i,j,n;
	printf("请输入国家数目：\n");
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		printf("\n");
		printf("第%d个国家:",i+1);
		gets(na[n]);
	}
	
}
