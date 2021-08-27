#include<stdio.h>
void mystrrev(char str[])
{
	int i,j,temp,c=0;
	for(i=0;str[i]!='\0';i++)
		c++;
	for(i=0,j=c-1;i<j;i++,j--)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
}
int main()
{
	char str[100];
	printf("enter a string:");
	scanf("%[^\n]s",str);
	mystrrev(str);
	printf("reverse string:%s\n",str);
	return 0;
}
