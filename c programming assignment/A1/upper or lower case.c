#include<stdio.h>
void main()
{
	char ch='z';
	if(ch>='A'&&ch<='z')
	printf("%c letter is in upper case",ch);
	else
	{
		if(ch>='a'&& ch<='z')
		printf("%c letter is in lower case",ch);
		else
		printf("letter is not a alphabet");
	}
}