#include<stdio.h>
int mystrchr(char str[],char c)
{
	int i,index;
	for(i=0;str[i]!='\0';i++)
		if(c==str[i])
		{
			index=i;
			return index;
		}
}
int main()
{
	char str[100],c;
	int x;
	printf("enter the string:");
	scanf("%[^\n]s",str);
	getchar();
	printf("enter the element to search:");
	scanf("%c",&c);
	x=mystrchr(str,c);
	printf("index:%d\n",x);
	return 0;
}


