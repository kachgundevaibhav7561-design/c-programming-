#include<stdio.h>
int main(){
	int num1,num2,max;
	printf("enetr a first num");
	scanf("%d",&num1);
	printf("enetr a second num");
	scanf("%d",&num2);
	//ternary opeartor
	max=(num1>num2)?num1:num2;
	printf("Maximun number=%d \n",max);
	
	return 0;
}
