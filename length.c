#include<stdio.h>
int mystrlen(char str[])
{
	int i,c=0;
	for(i=0;str[i]!='\0';i++)
		c++;
	return c;
}
int main()
{
	char str[100];
	int x;
	printf("enter the string:");
	scanf("%[^\n]s",str);
	x=mystrlen(str);
	printf("length:%d\n",x);
	return 0;
}

