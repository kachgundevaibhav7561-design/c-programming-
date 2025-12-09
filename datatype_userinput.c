#include<stdio.h>
int main(){
	int age;
	float marks;
	char grade;
	char name[20];
	printf("enter your age\n");
	scanf("%d",&age);
	printf("Enter your marks\n");
	scanf("%f",&marks);
	printf("Enter your grade\n");
	scanf("%c",&grade);
	printf("Enter your name\n");
	scanf("%s",name);
	
	
	// display the output//
	printf("---student details---\n");
	printf("age is : %d\n",age);
    printf("marks is : %.2f\n",marks);
	printf("grade is : %c\n",grade);
	printf("Name  is : %s\n",name);


	return 0;
}
