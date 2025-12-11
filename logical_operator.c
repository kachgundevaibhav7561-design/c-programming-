#include<stdio.h>
int main(){
	int x,y;
	printf("enter a value of x \n");
	scanf("%d",&x);
	printf("Enter a value of y \n");
	scanf("%d",&y);
	
	//logical operator
	printf("(x>y) && (x>0)= %d \n",(x>y) && (x>0));
	return 0;
}
