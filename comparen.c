#include<stdio.h>
int mycompare(char str1[],char str2[],int n)
{
	int i;
	for(i=0;str1[i]==str2[i];i++)
	{
		if(str1[i]==str1[n-1]&&str2[i]==str2[n-1])
			break;
	}
	return str1[i]-str2[i];
}
int main()
{
	char str1[100],str2[100];
	int x,n;
	printf("enter 1st string\n");
	scanf("%s",str1);
	printf("enter 2nd string\n");
	scanf("%s",str2);
	printf("enter the n value:");
	scanf("%d",&n);
	x=mycompare(str1,str2,n);
	printf("%d\n",x);
	return 0;
}
