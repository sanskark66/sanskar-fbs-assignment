#include<stdio.h>
void main()
{
	float basic=1500;
	float da,ta,hra,tsalary;
	if(basic<=5000)
	{
		da=basic * 0.10;
		ta=basic * 0.20;
		hra=basic * 0.25;
	}
	else
	{
		da=basic * 0.15;
		ta=basic * 0.25;
		hra=basic * 0.30;
    }
    
    tsalary=basic+da+ta+hra;
    printf("\ntotal salary on basic =%2f",tsalary);
}