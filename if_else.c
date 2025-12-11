#include<stdio.h>
int main(){
	int balance, withdrawal;
	printf("Enter a balance \n !");
	scanf("%d",&balance);
	printf("Enter withdrawal amount \n!");
	scanf("%d",&withdrawal);
	if(withdrawal<=balance){
		printf("withdrawal amount succesful !");
		printf("cheak balance =%d",balance-withdrawal);
	}else{
		printf("insufficient fund");
	}
	return 0;
}
	
//	int amount;
//	printf("Enetr your amount \n");
//	scanf("%d",&amount);
//	
//	if(amount>500){
//		printf("congrates, you gates fress delivery !");	
//	}else{
//		printf("delivery charges apply !");
//	}
//	
//	return 0;

