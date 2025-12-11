#include<stdio.h>
int main()
{
	int marks;
	printf("Enter your marks...! \n");
	scanf("%d",&marks);
	if(marks>35 && marks<50){
		printf("c grade");	
	}else if(marks>=51&&marks<70){
		printf("B grade");
	}else if(marks>=71 && marks<=100){
		printf("A grade");
	}
	else{
		printf("Fail...!");
	}
	
	
	return 0;
	
}
