#include<stdio.h>
void mystrconcat(char s1[],char s2[],int n)
{
	int i,j;
	for(i=0;s1[i]!='\0';i++);
	for(j=0;s2[j]!=s2[n];j++,i++)
		s1[i]=s2[j];
	s1[i]='\0';
}
int main()
{
	char s1[100],s2[100];
	int n;
	printf("enter 1st string\n");
	scanf("%[^\n]s",s1);
	getchar();	
	printf("enter 2nd string\n");
	scanf("%[^\n]s",s2);
	printf("enter n value to concat:");
	scanf("%d",&n);
	mystrconcat(s1,s2,n);
	printf("string concat:%s\n",s1);
	return 0;
}
