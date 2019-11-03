#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);
switch(a/10)
{
	case 1:printf("one");break;
	case 2:printf("twenty");break;
	case 3:printf("thrity");break;
	case 4:printf("fourty");break;
	case 5:printf("fivety");break;
	case 6:printf("sixty");break;
	case 7:printf("seventy");break;
	case 8:printf("eightty");break;
	case 9:printf("ninty");break;
	case 0:printf("");break;
}
printf("-");
switch(a%10)
{
	case 1:printf("one");break;
	case 2:printf("two");break;
	case 3:printf("three");break;
	case 4:printf("four");break;
	case 5:printf("five");break;
	case 6:printf("six");break;
	case 7:printf("seven");break;
	case 8:printf("eight");break;
	case 9:printf("nine");break;
	case 0:printf("");break;
}
return 0;
}
