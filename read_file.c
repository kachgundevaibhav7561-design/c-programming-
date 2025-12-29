// reading from file//
#include<stdio.h>
int main(){
	FILE *fp;
	char str[200];
	
	fp=fopen("D:\\vk\\anand_write.txt","r");
	if(fp==NULL){
		printf("Error opening file.....\n");
		return 1;
		
	}
	printf("file content");
	while(fgets(str,sizeof(str),fp)!=NULL){
		printf("%s",str);
	}
	fclose(fp);
	
	return 0;
}
