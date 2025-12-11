#include<stdio.h>
int main(){
	int no;
	printf("enetr a number \n");
	scanf("%d",&no);
	
	printf("Pre-increment=%d \n",++no);
	printf("post-increment=%d \n",no++);
	printf("After post increment=%d",no);
	printf("-------- \n\n");
	printf("pre decrement= %d \n",--no);
	printf("post decrement=%d \n",no--);
	printf("Afetr post decrement = %d\n",no);
	
	return 0;
}
