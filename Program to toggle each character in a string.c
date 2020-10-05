#include<stdio.h>
#include<string.h>
#define SIZE 100
void toggleString(char *str);
int main(void)
{
	char str[SIZE];
	int i;
	scanf("%[^\n]s", str);
	toggleString(str);
	return 0;
}
void toggleString(char * str)
{
	int length=strlen(str),i;
	for(i=0;i<length;i++)
	{
		if(str[i]>='a' && str[i]<='z')
		{
			str[i]=str[i]-32;
		}
		else if(str[i]>='A' && str[i]<='Z')
		{
			str[i]=str[i]+32;
		}
	}
	printf("%s",str);
}
