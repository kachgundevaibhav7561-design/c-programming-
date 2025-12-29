#include<stdio.h>
int main(){
	
	  //---------max value-------//
int arr[5]={34,54,54,65,77};
int max=arr[0];
int i;
 for(i=0;i<5;i++){
 	
 	if(arr[i]<max){
 		max=arr[i];
	 }
 }
 printf("Maximun no=%d",max);


	//---------even odd----------//
//int arr[8]={1,2,3,4,5,6,7,8};
//int even =0, odd=0;
//int i;
//for(i=0;i<8;i++){
//	if(arr[i] %2==0){
//		even++;
//	}else{
//		odd++;
//	}
//}
//		printf("even count=%d, odd count=%d",even,odd);
//	
//	
	//----------copy array---------//
//int arr1[5]={12,34,56,4,35};
//int arr2[5];
//int i;
//for(i=0;i<5;i++){
//	arr2[i]=arr1[i];
//}
//printf("copied array :");
//for(i=0;i<5;i++){
//	printf(" %d",arr2[i]);
//}


// sum of array elements//
//int arr[5]={5,56,76,76,8};
//int sum=0;
//int i;
//int length=sizeof(arr)/sizeof(arr[0]);
//
//for(i=0;i<length;i++){
//	sum+=arr[i];
//}
//intf("sum is :%d",sum);



//	int marks[5];
//	int i;
//	printf("Enter a 5 student marks");
//	for(i=0;i<5;i++){
//		scanf("%d",&marks[i]);
//	}
//	printf("students Marks:");
//	for(i=0;i<5;i++){
//		printf("marks[%d]=%d\n",i,marks[i]);
//	}
//	


	return 0;
}
