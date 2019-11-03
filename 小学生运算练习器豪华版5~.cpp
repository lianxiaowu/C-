#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//初始化应用  编译四则运算函数 
int szys(int a,int b)
{
	int i;
	for(i=1;i<15;i++)
	printf("☆★");
	printf("\n"); 
	printf("         1、加法练习       2、减法练习\n");
	printf("         3、乘法练习       4、除法练习\n");
	printf("         0、退出系统\n");
	int m;
	printf("\n");
    printf("           请输入你的选择(0~4):");
    scanf("%d",&m);
    	if(m!=0)
    	{
    		switch(m)
    		{
    			case 1:printf("经计算结果和为：%d+%d=%d",a,b,a+b);break;
    			case 2:printf("经计算结果差为：%d-%d=%d",a,b,a-b);break; 
    			case 3:printf("经计算结果积为：%d*%d=%d",a,b,a*b);break;
    			case 4:printf("经计算结果商为：%d/%d=%.2f(保留两位小数)",a,b,a/(b*1.00));break;
    			default:printf("输入错误，请重新输入！");break;
			}
		}
		else
		{
		    printf("欢迎下次使用本软件，再见！");
	        exit(0); 
		}
    
}

void zdsr()
{
	int i,m,p;
	for(i=1;i<15;i++)
	printf("☆★");
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
		case 3:printf("%d/%d=(保留两位小数)",num1,num2);l=num1/num2;break;
	 } 
	printf("\n请输入你的答案！");
	scanf("%f",&k);
	printf("\n正确答案为：%.2f",l);
	if(l==k)
	{
	printf("\n恭喜你答对了！总分+1");
    p++;
	}
    else
	printf("\n很遗憾，你打错了！不得分"); 
 
	}
    printf("\n你的得分为：%d\n",p);

}
//初始化结束
int main()
{
	int i,m,a,b;
	for(i=1;i<15;i++)
	printf("☆★");
	printf("\n\n\n");
	printf("           欢迎使用恶心小学生运算软件\n");
	printf("\n");
	for(i=1;i<15;i++)
	printf("☆★");
	printf("\n");
	printf("                是否选择自动输入");
	printf("         1、是             0、否\n");
	scanf("%d",&m);
	if(m==0)
	{
	for(;;)
	{
	printf("\n请输入两个非负整数\n");
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
