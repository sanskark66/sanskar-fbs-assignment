#include<stdio.h>
void main()
{
	int minute,hour;
	minute=10;
	hour=minute/60;
	printf("hours in minute=%d",hour);
	minute=minute %60;
	printf("minute in minute=%d",minute);
}