#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//��ʼ��Ӧ��  �����������㺯�� 
int szys(int a,int b)
{
	int i;
	for(i=1;i<15;i++)
	printf("���");
	printf("\n"); 
	printf("         1���ӷ���ϰ       2��������ϰ\n");
	printf("         3���˷���ϰ       4��������ϰ\n");
	printf("         0���˳�ϵͳ\n");
	int m;
	printf("\n");
    printf("           ���������ѡ��(0~4):");
    scanf("%d",&m);
    	if(m!=0)
    	{
    		switch(m)
    		{
    			case 1:printf("����������Ϊ��%d+%d=%d",a,b,a+b);break;
    			case 2:printf("����������Ϊ��%d-%d=%d",a,b,a-b);break; 
    			case 3:printf("����������Ϊ��%d*%d=%d",a,b,a*b);break;
    			case 4:printf("����������Ϊ��%d/%d=%.2f(������λС��)",a,b,a/(b*1.00));break;
    			default:printf("����������������룡");break;
			}
		}
		else
		{
		    printf("��ӭ�´�ʹ�ñ�������ټ���");
	        exit(0); 
		}
    
}

void zdsr()
{
	int i,m,p;
	for(i=1;i<15;i++)
	printf("���");
	printf("\n\n\n");
	for(m=0;m<5;m++)
	{
    int num1,num2,num3;
    float k,l;
	srand(time(NULL)); 
    num1=rand()%10;  
    num2=rand()%10;
	num3=rand()%4;
	printf("\n"); 
	switch(num3)
	{
		case 0:printf("%d+%d=",num1,num2);l=num1+num2;break;
		case 1:printf("%d-%d=",num1,num2);l=num1-num2;break;
		case 2:printf("%d*%d=",num1,num2);l=num1*num2;break;
		case 3:printf("%d/%d=(������λС��)",num1,num2);l=num1/num2;break;
	 } 
	printf("\n��������Ĵ𰸣�");
	scanf("%f",&k);
	printf("\n��ȷ��Ϊ��%.2f",l);
	if(l==k)
	{
	printf("\n��ϲ�����ˣ��ܷ�+1");
    p++;
	}
    else
	printf("\n���ź��������ˣ����÷�"); 
 
	}
    printf("\n��ĵ÷�Ϊ��%d\n",p);

}
//��ʼ������
int main()
{
	int i,m,a,b;
	for(i=1;i<15;i++)
	printf("���");
	printf("\n\n\n");
	printf("           ��ӭʹ�ö���Сѧ���������\n");
	printf("\n");
	for(i=1;i<15;i++)
	printf("���");
	printf("\n");
	printf("                �Ƿ�ѡ���Զ�����");
	printf("         1����             0����\n");
	scanf("%d",&m);
	if(m==0)
	{
	for(;;)
	{
	printf("\n�����������Ǹ�����\n");
	scanf("%d%d",&a,&b); 
	szys(a,b);
	}
	}
	else
	{
		for(;;)
		zdsr();
	}
	


}
