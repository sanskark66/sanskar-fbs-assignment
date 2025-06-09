#include<stdio.h>
int main()
{
	float price,tprice,discount=0;
	char isstudent;
	printf("enter price:");
	scanf("%f",& price);
	printf("Are you student?(y/n):");
	fflush(stdin);
	scanf("%c",& isstudent);
	if(isstudent=='y'||isstudent=='y'){
		if (price>=500){
			discount= 0.20*price;
		} else{
			discount= 0.10*price;
		}
	} else{
		if (price>=600){
			discount= 0.15*price;
		} else{
			discount= 0;
		}
	}
     tprice=price-discount;
    printf("discount%.2f\n",discount);
    printf("paid total price%.2f\n",tprice);
}
	