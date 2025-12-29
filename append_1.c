// appending file//
#include<stdio.h>
int main(){
	FILE *fp;
	fp=fopen("D:\\vk\\anand_write.txt","a");
	if(fp==NULL){
		printf("Error opening file....\n");
		return 1;
	}
	fprintf(fp,"this is append at end\n");
	fprintf(fp,"this line is append at end");
	fprintf(fp,"this line is appned is 2 \n");
	fclose(fp);
	printf("Data written succesfully ");
	
	
	
	return 0;
}
