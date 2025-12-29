// Binary write 
#include<stdio.h>
int main(){
	FILE *fp;
	int numbers[] ={10,20,30,40,50};
	
	fp=fopen("D:\\vk\\numbers1.bin","wb");
	if(fp==NULL)
	{
		
		printf("Error openinf file... \n");
		return 1;
   }
   fwrite(numbers,sizeof(int),5,fp);
   fclose(fp);
   printf("Binary data returns sucessfully..");
	return 0;
}
