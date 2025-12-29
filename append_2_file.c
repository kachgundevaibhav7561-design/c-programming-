#include<stdio.h>
int main(){
	FILE *fp;
	char name[50];
	int age;
	float marks;
	
	fp=fopen("D:\\vk\\vaibhav_txt","a");
	if(fp==NULL){
		
		printf("Error openinf file... \n");
		return 1;
	}
	
   fscanf(fp,"Name :%s\n age:%d\n marks: %.2f\n",name,&age,&marks);
   printf("stundet info read from file\n");
	printf("Name =%s\n",name);
   	printf("age is =%d\n",age);
   	printf("Markks=%.2f\n",marks);
   	
   	printf("vaibhav");
	

	return 0;
}
