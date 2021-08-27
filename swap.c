//swaping of two numbers without using third variable.
#include<stdio.h>
void swap(int *p1,int *p2)
{
	*p1=*p1+*p2;
	*p2=*p1-*p2;
	*p1=*p1-*p2;
}
int main()
{
	int a,b;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("before swap:%d %d\n",a,b);
	swap(&a,&b);
	printf("after swap:%d %d\n",a,b);
	return 0;
}
