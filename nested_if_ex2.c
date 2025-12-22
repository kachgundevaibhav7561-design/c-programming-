#include<stdio.h>
int main()
{
	int restaurantopen, foodAvailable,payment;
	printf("Restuarant open(1-yes,0-no)");
	Scanf("%d",&restaurantopen);
	
	if(restaurantopen==1){
		printf("your food available(1-yes,0-no)");
		scanf("%d",&foodAvailable);
			if(foodAvailable==1){
				printf("payment Succesful?(1-yes,0-no)");
				scanf("%d",&payment);
				
				  if(payment==1){
				  	printf("Order conformed");
				  }else{
				  	printf("order cancel....!");
				  }
			}else{
				printf("Food not Available");
			}
	}else{
		printf("Resturant is closed");
	}
	
	return 0;
}
