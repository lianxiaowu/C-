#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void hua()
{
	int i;
	for(i=1;i<15;i++)
	printf("���");
	printf("\n");
}

void gang()
{
	int i;
	for(i=1;i<38;i++)
	printf("--");
	printf("\n");
}

int suiji()
{
	int i;
	srand(time(NULL));
	i=rand()%6+1;
	return i;
}


int dryx()
{
	int a,b,c,i,f;
	hua();
	printf("���Ƚ��ɼ����Ϊ��Ͷ����һöɫ�ӡ�\n");
	getchar();
	getchar(); 
	a=suiji();
	printf("��һöɫ�ӵ�����Ϊ%d\n",a);
	getchar();
	printf("�����������Ͷ���ڶ�öɫ�ӡ�\n"); 
	printf("���������ʼͶ����\n");
	getchar();
	b=suiji();
	printf("�ڶ�öɫ�ӵ�����Ϊ%d\n",b); 
	c=a+b;
	printf("��һ��Ͷ�ĵ���֮��Ϊ%d��",c);
	if(c==7||c==11)
	{
		printf("��ϲ���ʤ��");
		printf("\n�Ƿ�ѡ�������Ϸ��    1��������Ϸ   0���˳���Ϸ");
		scanf("%d",&c);
		switch(c)
		{
			case 0:exit(0);break;
			case 1:dryx();break;
		}	
	}
	if(c==2||c==3||c==12)
	{
		printf("���ź��������ˣ�");
		printf("\n�Ƿ�ѡ�������Ϸ��    1��������Ϸ   0���˳���Ϸ");
		scanf("%d",&c);
		switch(c)
		{
			case 0:exit(0);break;
			case 1:dryx();break;
		}	
	}
	if(c==4||c==5||c==6||c==8||c==9||c==10)
	{
		printf("������Ͷɫ�ӣ�ֱ��Ͷ��%d����Ϊֹ�������Ͷ7����δͶ��%d����������Ϸ��ʧ�ܡ�",c,c);
		for(i=1;i<8;i++)
		{
			printf("���Ƚ��ɼ����Ϊ��Ͷ����һöɫ�ӡ�\n");
            getchar();
            getchar(); 
            a=suiji();
            printf("��һöɫ�ӵ�����Ϊ%d\n",a);
            getchar();
            printf("�����������Ͷ���ڶ�öɫ�ӡ�\n"); 
            printf("���������ʼͶ����\n");
            getchar();
            b=suiji();
            printf("�ڶ�öɫ�ӵ�����Ϊ%d\n",b);
			f=a+b;
			printf("��һ��Ͷ�ĵ���֮��Ϊ%d��",f);
			if(f==c)
			{
				printf("��ϲ����ʤ����");
				printf("\n�Ƿ�ѡ�������Ϸ��    1��������Ϸ   0���˳���Ϸ");
		        scanf("%d",&c);
	        	switch(c)
	        	{
						case 0:exit(0);break;
		            	case 1:dryx();break;
	        	}
			    break;
			}
			else
			{
			if(i==7)
			printf("���ź�����ʧ���ˣ�\n"); 
			else 
			printf("���ź����������е�%d��\n",i+1);
			} 
		}
	} 
}

int sryx()
{
	int a,b,c,i,f;
	hua();
	printf("���Ƚ��ɵ�һ�����Ͷ����һöɫ�ӡ�\n");
	getchar();
	getchar(); 
	a=suiji();
	printf("��һöɫ�ӵ�����Ϊ%d\n",a);
	getchar();
	printf("�������ɵڶ������Ͷ���ڶ�öɫ�ӡ�\n"); 
	printf("���������ʼͶ����\n");
	getchar();
	b=suiji();
	printf("�ڶ�öɫ�ӵ�����Ϊ%d\n",b); 
	c=a+b;
	printf("��һ��Ͷ�ĵ���֮��Ϊ%d��",c);
	if(c==7||c==11)
	{
		printf("��ϲ���ǻ�ʤ��");
		printf("\n�Ƿ�ѡ�������Ϸ��    1��������Ϸ   0���˳���Ϸ");
		scanf("%d",&c);
		switch(c)
		{
			case 0:exit(0);break;
			case 1:dryx();break;
		}	
	}
	if(c==2||c==3||c==12)
	{
		printf("���ź����������ˣ�");
		printf("\n�Ƿ�ѡ�������Ϸ��    1��������Ϸ   0���˳���Ϸ");
		scanf("%d",&c);
		switch(c)
		{
			case 0:exit(0);break;
			case 1:dryx();break;
		}	
	}
	if(c==4||c==5||c==6||c==8||c==9||c==10)
	{
		printf("���ǽ�����Ͷɫ�ӣ�ֱ��Ͷ��%d����Ϊֹ�������Ͷ7����δͶ��%d����������Ϸ��ʧ�ܡ�",c,c);
		for(i=1;i<8;i++)
		{
			printf("���Ƚ��ɵ�һ�����Ͷ����һöɫ�ӡ�\n");
            getchar();
            getchar(); 
            a=suiji();
            printf("��һöɫ�ӵ�����Ϊ%d\n",a);
            getchar();
            printf("�������ɵڶ���������Ͷ���ڶ�öɫ�ӡ�\n"); 
            printf("���������ʼͶ����\n");
            getchar();
            b=suiji();
            printf("�ڶ�öɫ�ӵ�����Ϊ%d\n",b);
			f=a+b;
			printf("��һ��Ͷ�ĵ���֮��Ϊ%d��",f);
			if(f==c)
			{
				printf("��ϲ���ǻ��ʤ����");
				printf("\n�Ƿ�ѡ�������Ϸ��    1��������Ϸ   0���˳���Ϸ");
		        scanf("%d",&c);
	        	switch(c)
	        	{
						case 0:exit(0);break;
		            	case 1:dryx();break;
	        	}
			    break;
			}
			else
			{
			if(i==7)
			printf("\n���ź�������ʧ���ˣ�\n"); 
			else 
			printf("\n���ź������ǽ����е�%d��\n",i+1);
			} 
		}
	} 
}

void menu()
{
	hua();
	printf("        ��ӭ����������ɫ����Ϸ��\n\n");
	hua();
	int i;
	printf("\n"); 
	printf("         1��������Ϸ       2��˫����Ϸ\n");
	printf("         0���˳�ϵͳ\n");
	printf("\n");
    printf("           ���������ѡ��(0~2):");
    for(;;)
    {
    scanf("%d",&i);
    if(i<0||i>2)
    printf("\n�������˴���ѡ��,���������롣");
	else
	break;  	
	}
	switch(i)
	{
		case 0:exit(0);
		case 1:hua();printf("��ѡ���˵�����Ϸ��\n");dryx();break;
		case 2:hua();printf("��ѡ����˫����Ϸ��\n");sryx();break;
	}
}

int main()
{
	char c;
	hua();
	printf("        ��ӭ����������ɫ����Ϸ��\n\n");
	printf("            �����Ķ���Ϸ����\n\n"); 
	hua();
	printf("\nÿ��ɫ�������棬Ͷ��öɫ�Ӻ󣬼������֮�͡�\n");	
	gang();
	printf("��һ��Ͷ�ĵ�����Ϊ7��11	            |    ��Ϸ�߻�ʤ\n");
	gang();
	printf("��һ��Ͷ�ĵ�����Ϊ2��3��12	    |    ��Ϸ��ʧ��\n");
	gang();
	printf("��һ��Ͷ�ĵ�����Ϊ4��5��6��8��9��10 |    ���˵�������Ϊ��Ϸ�߻�ʤ��ҪͶ\n");
	printf("                                    |    ���ĵ���������Ͷɫ�ӣ�ֱ��Ͷ��\n");
	printf("                                    |    �õ���Ϊֹ�� �����Ͷ7����δͶ\n");
	printf("                                    |    ���õ���������Ϸ��ʧ��\n");
	gang();
	printf("\n\n�������������Ϸ��\n\n");
	c=getchar();
	if(c>0)
	{
		system("cls");
		menu();
	}
	
}
