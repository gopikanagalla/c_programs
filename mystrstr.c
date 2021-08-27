//implementations of strstr() function using pointers
#include<stdio.h>
int mystrstr(char *,char *);
int mystrcmp(char * ,char *,int );
int main()
{
char str1[100],str2[100];
int result=0;
printf("enter string:");
scanf("%[^\n]s",str1);
getchar();
printf("enter substring:");
scanf("%[^\n]s",str2);
result=mystrstr(str1,str2);
if(result==-1)
	printf("string not found\n");
else
	printf("index:%d\n",result);
return 0;
}
int mystrstr(char *str1,char* str2)
{
int i,res;
for(i=0;*(str1+i)!='\0';i++)
{
   res=0;
   res=mystrcmp(str1,str2,i);
   if(res==1)
	   return i; //when string found 
}
return -1;
}
int mystrcmp(char* str1,char *str2,int i)
{
int j=0;
while(*(str2+j)!='\0')
{
if(*(str1+i)!=*(str2+j))
	return 0;
i++;
j++;
}
return 1;
}
