#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int get_ints_from_line(char* string,int* result,int max)
{	
	
	int len;
	len=strlen(string);

	char chars[len];
	strcpy(chars,string);
	
	int i;
	
	char *start=chars;
	char *s=chars;
	
	char a;
	int temp;
	while((a=*s)!='\0')
	{
		if(a!=32)
		{
			s++;
			continue;
		}
		

	*s='\0'; 

	temp=atoi(start);
	if((temp!=0)||(*(s-1)=='0'))
	result[i++]=temp;
	if(i==max)
		return max;
	start=++s;
	
	}
	
	if(*(start)!='\0')
	{
		temp=atoi(start);
		if((temp!=0)||(*(s-1)=='0'))
		result[i++]=temp;
	
	}

	return i;
}


void main()
{	
	int dat[100];
	char chars[100];
	int n=0;
	int i=0;
	n=get_ints_from_line(gets(chars),dat,100);
	
	for(i=0;i<n;i++)
	{
		printf("%d   ",dat[i]);
	}
	printf("\nlength is:%d\n",n);
}


