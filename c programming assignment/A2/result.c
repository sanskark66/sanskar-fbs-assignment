#include<stdio.h>
void main()
{
	int num1,num2;
	char op;
	printf("enter first number:");
	scanf("%d",&num1);
	printf("enter second number:");
	scanf("%d",&num2);
	printf("enter operator (+,-,*,/,%%):");
	scanf(" %c",&op);
	if(op=='+'){
		printf("result=%d\n",num1+num2);
	}
	else if (op=='-'){
		printf("result=%d\n",num1-num2);
	}
	else if (op=='*'){
		printf("result=%d\n",num1*num2);
	}
	else if (op=='/'){
		if (num2!=0)
     printf("result=%d\n",num1/num2);
     else
     printf("error:division by zero!\n");
	}
	else if(op=='%'){
		if (num2!=0)
		printf("result=%d\n",num1%num2);
		else
		printf("error:module by zero!\n");
	}else{
		printf("invalid operator!\n");
}

}