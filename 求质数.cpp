#include<stdio.h>
int main()
{
	int i,m,t=0;
	for(m=2;m<=100;m++)
	{
		    i=1;
		    do
		{
		    i++;
		}
		    while(m%i!=0&&i<m);
	        if(i==m)
		{
			t++;
			printf("%3d",m);
			if(t%5==0)
			printf("\n");
		}
	}
	return 0;
}

