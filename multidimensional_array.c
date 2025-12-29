#include<stdio.h>
int main(){
	// --------secondary diagonal---------//
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int i,j;
printf("primary diagonal=");
for(i=0;i<3;i++){
	printf("%d",arr[i][2-i]);
}

	//-----------primary diagonal----------//
//int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//int i,j;
//printf("primary diagonal=");
//for(i=0;i<3;i++){
//	printf("%d",arr[i][i]);
//}
//
	
	//----- for user input-------//
//int arr[2][2];
//int i,j;
//printf("enter a number");
//for(i=0;i<2;i++){
//	for(j=0;j<2;j++){
//		scanf("%d",&arr[i][j]);
//	}
//}
//	printf("enetered elements :");
//	for(i=0;i<2;i++){
//		for(j=0;j<2;j++){
//			printf("%d",arr[i][j]);
//		}
//		printf("\n");
//	}
	
	
	 
//	int arr[2][3]={{1,2,3},{4,5,6}};
//	int i,j;
//	
//	for(i=0;i<2;i++){
//		for(j=0;j<3;j++){
//			printf(" %d",arr[i][j]);
//			
//		}
//		printf("\n");
//	}
	
	return 0;
}
