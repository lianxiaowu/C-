#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Time
{
	int mon;
	int d;
	int h;
};
struct slist
{
	char name[15];
	char phone[11];
	int num;
	Time time;
	slist *next;
};
slist *creat(int n)
{
	printf("\n"); 
	slist *head,*node,*end;
	head=(slist*)malloc(sizeof(slist));
	end=head;
	for(int i=0;i<n;i++)
	{
		node=(slist*)malloc(sizeof(slist));
		printf("�������%dλ�˿Ͷ������(4λ)\n",i+1);
		scanf("%d",&node->num);
		getchar();
		printf("�������%dλ�˿�����\n",i+1);
		gets(node->name);
		printf("�������%dλ�˿��ֻ��ţ�11λ��\n",i+1);
		gets(node->phone);
		printf("�������%dλ�˿�Ԥ���·�\n",i+1);
		scanf("%d",&node->time.mon);
		printf("�������%dλ�˿�Ԥ�����\n",i+1);
		scanf("%d",&node->time.d);
		printf("�������%dλ�˿�Ԥ��ʱ��\n",i+1);
		scanf("%d",&node->time.h);
		end->next=node;
		end=node;
	}
	end->next=NULL;
	return head;
}
int import(FILE *fp,slist *head)
{
	int n=0,num;
	slist *node,*end;
	end=head;
	while(1)
	{
		node=(slist*)malloc(sizeof(slist));
		num=fscanf(fp,"%d %s %s %d %d %d\n",&node->num,node->name,node->phone,&node->time.mon,&node->time.d,&node->time.h);
		end->next=node;
		end=node;
		if(num==6)
		n++;
		else
		break;
	}
	end->next=NULL;
	rewind(fp);
	return n;
}
void savef(FILE *fp,slist *head,int n)
{
	slist *t=head;
	int i;
	for(i=0;i<n&&t->next!=NULL;i++)
	{
		t=t->next;
		fprintf(fp,"%d %s %s %d %d %d\n",t->num,t->name,t->phone,t->time.mon,t->time.d,t->time.h);	
	}
	rewind(fp);
}
void show(slist *t)
{
		printf("�˿Ͷ������%d\n",t->num);
		printf("�˿�����%s\n",t->name);
		printf("�˿��ֻ���%s\n",t->phone);
		printf("�˿�Ԥ���·�%d\n",t->time.mon);
		printf("�˿�Ԥ�����%d\n",t->time.d);
		printf("�˿�Ԥ��ʱ��%d\n",t->time.h);
		printf("\n"); 
}
void Delete(slist *head,slist *t)
{
	int i;
	slist *tt=head,*p;
	for(i=0;tt!=NULL;i++)
	{
		p=tt;
		tt=tt->next;
		if(tt==t)
		{
			p->next=tt->next;
			free(tt);
			break;
		}
		if(tt->next==NULL)
		printf("���޴���\n");
	}
}
int switchtime(int month,int d,int h)
{
	return (month*30*24+d*24+h); 
}
slist *nums(slist *head,int n,int num)
{
	int i;
	slist *t=head;
	for(i=0;i<n&&t->next!=NULL;i++)
	{
		t=t->next;
		if(t->num==num)
		break;
		if(t->next==NULL)
		printf("���޴���\n");		
	}
	return t;
}
slist *names(slist *head,int n,char *name)
{
	int i;
	slist *t=head;
	for(i=0;i<n&&t->next!=NULL;i++)
	{
		t=t->next;
		if(strcmp(t->name,name)==0)
		break;
		if(t->next==NULL)
		printf("���޴���\n");		
	}
	return t;	
}
slist *phones(slist *head,int n,char *phone)
{
	int i;
	slist *t=head;
	for(i=0;i<n&&t->next!=NULL;i++)
	{
		t=t->next;
		if(strcmp(t->phone,phone)==0)
		break;
		if(t->next==NULL)
		printf("���޴���\n");		
	}
	return t;	
}
void searchtime(slist *head,int n,int mon1,int d1,int h1,int mon2,int d2,int h2)
{
	int i;
	slist *t=head;
	int time;
	for(i=0;i<n&&t->next!=NULL;i++)
	{
		t=t->next;
		time=switchtime(t->time.mon,t->time.d,t->time.h);
		if(switchtime(mon1,d1,h1)<=time&&switchtime(mon2,d2,h2)>=time)
			show(t);
	}	
}
void searchf(slist *head,int n)
{
	char name[15];
	char phone[11];
	int num,i;
	Time time1,time2;
	printf("==============================================\n");
	printf("      0��������Ų�ѯ\n");
	printf("      1��������������ѯ\n");     			
	printf("      2�����͵绰��ѯ\n");
	printf("      3��ʱ��β�ѯ\n");
	printf("===============================================\n");
	printf("     ���������ѡ��(0~3):\n");
	scanf("%d",&i);
	switch(i)
	{
		case 0:
			printf("�����붩�����\n");
			scanf("%d",&num); 
			show(nums(head,n,num));
			break;
		case 1:
			getchar();
			printf("�����붩��������\n");
			gets(name);
			show(names(head,n,name));
			break;
		case 2:
			getchar();
			printf("�����붩���˵绰��11��\n");
			gets(phone);
			show(phones(head,n,phone));
			break;
		case 3:
			printf("�������һ��ʱ���\n");
			scanf("%d%d%d",&time1.mon,&time1.d,&time1.h);
			printf("������ڶ���ʱ���\n");
			scanf("%d%d%d",&time2.mon,&time2.d,&time2.h);
			searchtime(head,n,time1.mon,time1.d,time1.h,time2.mon,time2.d,time2.h);
			break;
		default:break;		
	} 
}
void changef(slist *head,int n)
{
	char name1[15],name2[15];
	char phone1[11],phone2[11];
	int num1,i,num2;
	printf("==============================================\n");
	printf("      0����������޸�\n");
	printf("      1�������������޸�\n");     			
	printf("      2�����͵绰�޸�\n");
	printf("===============================================\n");
	printf("     ���������ѡ��(0~2):\n");
	scanf("%d",&i);
	switch(i)
	{
		case 0:
			printf("�������޸�ǰ�ı�ţ�\n");
			scanf("%d",&num1);
			printf("�������޸ĺ�ı�ţ�\n");
			scanf("%d",&num2);
			nums(head,n,num1)->num=num2;
			break;
		case 1:
			printf("�������޸�ǰ�Ķ�����������\n");
			gets(name1);
			printf("�������޸ĺ�ĵĶ�����������\n");
			gets(name2);
			strcpy(names(head,n,name1)->name,name2);
			break;
		case 2:
			printf("�������޸�ǰ�Ķ������ֻ��ţ�\n");
			gets(phone1);
			printf("�������޸ĺ�ĵĶ������ֻ��ţ�\n");
			gets(phone2);
			strcpy(phones(head,n,phone1)->phone,phone2);	
			break;	
		default:break;			
	}
}
int Deletef(slist *head,int n)
{
	char name[15];
	char phone[11];
	int num,i;
	printf("==============================================\n");
	printf("      0��ͨ���������ɾ��\n");
	printf("      1��ͨ������������ɾ��\n");     			
	printf("      2��ͨ�����͵绰ɾ��\n");
	printf("===============================================\n");
	printf("     ���������ѡ��(0~2):\n");
	scanf("%d",&i);
	switch(i)
	{
		case 0:
			printf("������ɾ�������Ķ�����ţ�\n");
			scanf("%d",&num);
			Delete(head,nums(head,n,num));
			break;
		case 1:
			printf("������ɾ�������Ķ�����������\n");
			gets(name);
			Delete(head,names(head,n,name));
			break;
		case 2:
			printf("������ɾ�������Ķ������ֻ��ţ�\n");
			gets(phone);
			Delete(head,phones(head,n,phone));
			break;	
		default:break;		
	}
	return --n;
}
int addf(slist *head,int n)
{
	int i;
	slist *t=head;
	slist *node;
	for(i=0;i<n&&t->next!=NULL;i++)
		t=t->next;
	node=(slist*)malloc(sizeof(slist));
	printf("������˿Ͷ������(4λ)\n");
	scanf("%d",&node->num);
	getchar();
	printf("������˿�����\n");
	gets(node->name);
	printf("������˿��ֻ��ţ�11λ��\n");
	gets(node->phone);
	printf("������˿�Ԥ���·�\n");
	scanf("%d",&node->time.mon);
	printf("������˿�Ԥ�����\n");
	scanf("%d",&node->time.d);
	printf("������˿�Ԥ��ʱ��\n");
	scanf("%d",&node->time.h);
	t->next=node;
	t=node;
	t->next=NULL;
	return ++n;
}
void sortf(slist *head,int n)
{
	slist *num[n];
	slist *t=head;
	int i;
	slist *temp;
	for(i=0;i<n&&t->next!=NULL;i++)
	{
		t=t->next;
		num[i]=t;
	}
	for(i=0;i<n;i++) 
	{
		for(int j=i+1;j<n;j++)
		{
			if(switchtime(num[i]->time.mon,num[i]->time.d,num[i]->time.h)>switchtime(num[j]->time.mon,num[j]->time.d,num[j]->time.h))
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	for(i=0;i<n&&t->next!=NULL;i++)
	{
		t=t->next;
		t=num[i];
	}	
	}
}
void showf(slist *head,int n)
{
	int i;
	slist *t=head;
	for(i=0;i<n&&t->next!=NULL;i++)
	{
		t=t->next;
		show(t);	
	}
}
int showMenu()
{
	int i;
	printf("==============================================\n");
	printf("           ��ӭʹ�õ绰����ϵͳ\n");
	printf("      0���˳�ϵͳ\n");
	printf("      1�����涩����Ϣ�����������أ�\n");     			
	printf("      2�����Ҷ�����Ϣ\n");
	printf("      3���޸Ķ�����Ϣ\n");
	printf("      4��ɾ��������Ϣ\n");
	printf("      5�����Ӷ�����Ϣ\n");
	printf("      6�����򶩵���Ϣ\n");
	printf("      7������������Ϣ���ļ��޶�����Ϣ��\n");  
	printf("      8�����붩����Ϣ���ļ��ж�����Ϣ��\n");  	
	printf("      9����ʾ���ж�����Ϣ\n");
	printf("===============================================\n");
	printf("     ���������ѡ��(0~9):\n");
	scanf("%d",&i);
	return i;
}
int main()
{
	system("color f4"); 
	int num;
	FILE *fp=fopen("user.txt","rt+");
	rewind(fp);
	slist *head=(slist*)malloc(sizeof(slist));
	head->next=NULL; 
	while(1)
	{
		system("cls");
		switch(showMenu())
		{
		case 0:exit(0);
		case 1:
			savef(fp,head,num);
			break;
		case 2:
			searchf(head,num);
			break;
		case 3:
			changef(head,num);
			break;
		case 4:
			num=Deletef(head,num);
			break;
		case 5:
			num=addf(head,num);
			break;
		case 6:
			sortf(head,num);
			break;
		case 7:
			printf("�����붩��������\n");
			scanf("%d",&num);
			head=creat(num);
			break;
		case 8:
			printf("�ɹ�����%d������\n",num=import(fp,head));
			break;	
		case 9:
			showf(head,num);
			break;		
		}
	getchar();
	getchar();	
	}

	fclose(fp);
}
