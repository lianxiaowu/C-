#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void hua()
{
	int i;
	for(i=1;i<15;i++)
	printf("☆★");
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
	printf("首先将由计算机为您投掷第一枚色子。\n");
	getchar();
	getchar(); 
	a=suiji();
	printf("第一枚色子的数字为%d\n",a);
	getchar();
	printf("接下来由玩家投掷第二枚色子。\n"); 
	printf("按任意键开始投掷。\n");
	getchar();
	b=suiji();
	printf("第二枚色子的数字为%d\n",b); 
	c=a+b;
	printf("第一次投的点数之和为%d，",c);
	if(c==7||c==11)
	{
		printf("恭喜你获胜！");
		printf("\n是否选择继续游戏？    1、继续游戏   0、退出游戏");
		scanf("%d",&c);
		switch(c)
		{
			case 0:exit(0);break;
			case 1:dryx();break;
		}	
	}
	if(c==2||c==3||c==12)
	{
		printf("很遗憾，你输了！");
		printf("\n是否选择继续游戏？    1、继续游戏   0、退出游戏");
		scanf("%d",&c);
		switch(c)
		{
			case 0:exit(0);break;
			case 1:dryx();break;
		}	
	}
	if(c==4||c==5||c==6||c==8||c==9||c==10)
	{
		printf("您将续投色子，直到投到%d点数为止。如果联投7次仍未投到%d点数，则游戏者失败。",c,c);
		for(i=1;i<8;i++)
		{
			printf("首先将由计算机为您投掷第一枚色子。\n");
            getchar();
            getchar(); 
            a=suiji();
            printf("第一枚色子的数字为%d\n",a);
            getchar();
            printf("接下来由玩家投掷第二枚色子。\n"); 
            printf("按任意键开始投掷。\n");
            getchar();
            b=suiji();
            printf("第二枚色子的数字为%d\n",b);
			f=a+b;
			printf("第一次投的点数之和为%d，",f);
			if(f==c)
			{
				printf("恭喜你获得胜利！");
				printf("\n是否选择继续游戏？    1、继续游戏   0、退出游戏");
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
			printf("很遗憾，您失败了！\n"); 
			else 
			printf("很遗憾，您将进行第%d轮\n",i+1);
			} 
		}
	} 
}

int sryx()
{
	int a,b,c,i,f;
	hua();
	printf("首先将由第一名玩家投掷第一枚色子。\n");
	getchar();
	getchar(); 
	a=suiji();
	printf("第一枚色子的数字为%d\n",a);
	getchar();
	printf("接下来由第二名玩家投掷第二枚色子。\n"); 
	printf("按任意键开始投掷。\n");
	getchar();
	b=suiji();
	printf("第二枚色子的数字为%d\n",b); 
	c=a+b;
	printf("第一次投的点数之和为%d，",c);
	if(c==7||c==11)
	{
		printf("恭喜你们获胜！");
		printf("\n是否选择继续游戏？    1、继续游戏   0、退出游戏");
		scanf("%d",&c);
		switch(c)
		{
			case 0:exit(0);break;
			case 1:dryx();break;
		}	
	}
	if(c==2||c==3||c==12)
	{
		printf("很遗憾，你们输了！");
		printf("\n是否选择继续游戏？    1、继续游戏   0、退出游戏");
		scanf("%d",&c);
		switch(c)
		{
			case 0:exit(0);break;
			case 1:dryx();break;
		}	
	}
	if(c==4||c==5||c==6||c==8||c==9||c==10)
	{
		printf("你们将继续投色子，直到投到%d点数为止。如果联投7次仍未投到%d点数，则游戏者失败。",c,c);
		for(i=1;i<8;i++)
		{
			printf("首先将由第一名玩家投掷第一枚色子。\n");
            getchar();
            getchar(); 
            a=suiji();
            printf("第一枚色子的数字为%d\n",a);
            getchar();
            printf("接下来由第二名玩家玩家投掷第二枚色子。\n"); 
            printf("按任意键开始投掷。\n");
            getchar();
            b=suiji();
            printf("第二枚色子的数字为%d\n",b);
			f=a+b;
			printf("第一次投的点数之和为%d，",f);
			if(f==c)
			{
				printf("恭喜你们获得胜利！");
				printf("\n是否选择继续游戏？    1、继续游戏   0、退出游戏");
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
			printf("\n很遗憾，你们失败了！\n"); 
			else 
			printf("\n很遗憾，你们将进行第%d轮\n",i+1);
			} 
		}
	} 
}

void menu()
{
	hua();
	printf("        欢迎来到欢乐掷色子游戏。\n\n");
	hua();
	int i;
	printf("\n"); 
	printf("         1、单人游戏       2、双人游戏\n");
	printf("         0、退出系统\n");
	printf("\n");
    printf("           请输入你的选择(0~2):");
    for(;;)
    {
    scanf("%d",&i);
    if(i<0||i>2)
    printf("\n您输入了错误选项,请重新输入。");
	else
	break;  	
	}
	switch(i)
	{
		case 0:exit(0);
		case 1:hua();printf("您选择了单人游戏！\n");dryx();break;
		case 2:hua();printf("您选择了双人游戏！\n");sryx();break;
	}
}

int main()
{
	char c;
	hua();
	printf("        欢迎来到欢乐掷色子游戏。\n\n");
	printf("            请先阅读游戏规则：\n\n"); 
	hua();
	printf("\n每个色子有六面，投两枚色子后，计算点数之和。\n");	
	gang();
	printf("第一次投的点数和为7、11	            |    游戏者获胜\n");
	gang();
	printf("第一次投的点数和为2、3、12	    |    游戏者失败\n");
	gang();
	printf("第一次投的点数和为4、5、6、8、9、10 |    将此点数和作为游戏者获胜需要投\n");
	printf("                                    |    出的点数，继续投色子，直到投到\n");
	printf("                                    |    该点数为止。 如果联投7次仍未投\n");
	printf("                                    |    到该点数，则游戏者失败\n");
	gang();
	printf("\n\n按任意键进入游戏。\n\n");
	c=getchar();
	if(c>0)
	{
		system("cls");
		menu();
	}
	
}
