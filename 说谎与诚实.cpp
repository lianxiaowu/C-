#include<stdio.h>
int main()
{
	int i=0,a=0,b=0,s;
    scanf("%d",&s);
	for(i=0;s>=0;i++)
	{
		m=m-5*i;
		for(a=0;s>=0;a++)
		{
			m=m-2*a;
			for(b=0;s>=0;b++)
			{
				m=m-b;
				if(s==0)
				printf("5·Ö£º%d\n2·Ö£º%d\n1·Ö£º%d",i,a,b);
			}
		}
	}
 } 
