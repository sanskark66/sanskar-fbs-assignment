#include<stdio.h>
void main()
{
	int marks;
	printf("enter student marks:");
	scanf("%d",&marks);
	if (marks>=75){
		printf("distinction");
	}
	else if (marks <=75&&marks>=65){
		printf("first class");
	}
	else if (marks <=65&&marks>=55){
		printf("second class");
	}
	else if (marks<=55&&marks>=40){
		printf("pass class");
	}
	else
	printf("fail");
}