//user input write 

#include<stdio.h>
int main(){
	FILE *fp;
	char name[50];
	int age;
	float marks;
	
	fp=fopen("D:\\vk\\vaibhav_txt","w");
	if(fp==NULL){
		
		printf("Error openinf file... \n");
		return 1;
	}
	printf("Enter stundent name");
	scanf("%s",name);
	
	printf("Enetr student age");
	scanf("%d",&age);
	
	printf("eneer studnet marks");
	scanf("%f",&marks);
	
	fprintf(fp,"Name :%s \n age:%d\n marks:%.2f \n",name,age,marks);
	fclose(fp);
	printf("Data returns succesfully to fileD:\\vk\\vaibhav_txt");	
	return 0;
}

