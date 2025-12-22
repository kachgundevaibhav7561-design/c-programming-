#include<stdio.h>
int main(){
	/*
	****
	****
	****
	****
	*/
	int num=6;
	int i,j;
	for( i=0 ;i<num;i++){
		for( j=0;j<=num;j++){
			printf("*");
		}
		printf("\n");
	}
	//---------
	/*
	*
	**
	***
	****
	*/
	printf("\n\n");
	for( i=0 ;i<num;i++){
		for( j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	//------------
	/*
	1
	12
	123
	1234
	12345
	*/
		printf("\n\n");
			for( i=1 ;i<num;i++){
		for( j=1;j<=i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	printf("\n\n");
	/*
	123
	456
	789
	*/
	for(i=1;i<=num;i++){
		for(j=1;j<=i;j++){
			printf("%d",i*j);
		}

	}
	printf("\n\n");
	
	/*
	
	*/
	for(i=num;i>=1;i--){
		for(j=1;j<=i;j--){
			printf("*");
		}
		printf("\n");
	}
	

	return 0;
}
