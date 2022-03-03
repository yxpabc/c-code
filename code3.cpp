#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int MAX(int x,int y)
//{
//if(x>y)
//	return x;
//else
//	return y;
//}
struct people
{
	char name[20];
	short year;
};
int main()
{
struct people b1={"杨小平",22};
struct people* pb=&b1;
printf("%s\n",pb->name);
//scanf("%d%d",&a,&b);
//c=MAX(a,b);
//printf("较大值是：%p\n",&a);
 return 0;
}
