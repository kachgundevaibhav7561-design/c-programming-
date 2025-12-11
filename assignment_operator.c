#include<stdio.h>
int main(){
	int num;
	printf("Enetr a number: \n");
	scanf("%d",&num);
	//num=num+5
	num+=5;
	printf("after num+= %d \n",num);
	num-=12;
	printf("after num-= %d \n",num);
	num*=5;
	printf("after num*= %d \n",num);
	num/=13;
	printf("after num/= %d \n",num);
	num%=12;
	printf("after num%= %d \n",num);


	
	
	return 0;
}
