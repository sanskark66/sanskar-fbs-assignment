#include<stdio.h>
int main()
{
	int s1,s2,s3;
	printf("enter side 1:");
	scanf("%d",&s1);
	printf("enter side 2:");
	scanf("%d",&s2);
	printf("enter side 3:");
	scanf("%d",&s3);
	if (s1==s2 && s2==s3)
	printf("triangles is equilateral triangle");
	else if(s1==s2||s2==s3||s1==s3)
	printf("triangles is an isosceles triangle");
	else
	printf("triangle is an scalene triangle");
}