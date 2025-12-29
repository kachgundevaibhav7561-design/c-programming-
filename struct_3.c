#include<stdio.h>
struct Student{
	int roll_no;
	char name[20];
	float marks;
};
int main(){
	int n;
	printf("Enter a number of students");
	scanf("%d",&n);
	int i;
	struct Student students[n];
	for(i=0;i<n;i++){

		printf("\n enter details of student =%d",i+1);
			printf("Roll no:");
		scanf("%d",&students[i].roll_no);
		  	 printf("Name");
		scanf("%s",&students[i].name);
			printf("mark");
		scanf("%f",&students[i].marks);
		
	}
	printf("student records \n");
	for(i=0;i<n;i++){
		printf("roll no =%d,Name=%s,Marks=%.2f \n",students[i].roll_no,students[i].name,students[i].marks);
		
}
	
	
	return 0;
}
