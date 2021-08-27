#include<stdio.h>
int mycompare(char str1[],char str2[])
{
	int i;
	for(i=0;str1[i]==str2[i];i++)
	{
		if(str1[i]=='\0'&&str2[i]=='\0')
			break;
	}
	return str1[i]-str2[i];
}
int main()
{
	char str1[100],str2[100];
	int x;
	printf("enter 1st string\n");
	scanf("%s",str1);
	printf("enter 2nd string\n");
	scanf("%s",str2);
	x=mycompare(str1,str2);
	printf("%d\n",x);
	return 0;
}
