// WRITING A FILE//

#include<stdio.h>
int main(){
	FILE *fp;
	fp=fopen("D:\\vk\\anand_write.txt","w");
	if(fp==NULL){
		printf("Error opening file \n");
		return 1;
	}
	fprintf(fp,"hello, Welcome to pune");
	fprintf(fp,"hello ");
	fclose(fp);
	printf("Data written successfully");

	return 0;
}
