#include<stdio.h>
void mystrcpy(char s1[],char s2[])
{
	int i,j;
	for(i=0,j=0;s2[j]!='\0'+1;i++,j++)
		s1[i]=s2[j];
}
int main()
{
	char s1[100],s2[100];
	printf("enter first string\n");
	scanf("%[^\n]s",s1);
	getchar();
	printf("enter second string\n");
	scanf("%[^\n]s",s2);
	mystrcpy(s1,s2);
	printf("the string copied to s1 is:\n%s\n",s1);
	return 0;
}
