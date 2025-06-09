#include<stdio.h>
void main()
{
	int no1,no2,no3;
	printf("enter first number:");
	scanf("%d",&no1);
	printf("enter second number:");
	scanf("%d",&no2);
	printf("enter third number:");
	scanf("%d",&no3);
	if (no1>no2 && no2>no3)
	printf("number first is greater%d",no1);
	else if(no1<no2>no3)
	printf("number second is greater%d",no2);
	else
	printf("number third is greater%d",no3);
}