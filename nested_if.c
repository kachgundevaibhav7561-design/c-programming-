#include<stdio.h>
int main(){
	int ticket, idproof, luggage;
	printf("do you have a ticket (1-yes,0-no)");
	scanf("%d",&ticket);
	if(ticket==1){
		printf("do you hav ID proof (1-yes,0-no)");
		scanf("%d",&idproof);
		if(idproof==1){
			printf("IS luggage within 15kg (yes-1,no-0)");
			scanf("%d",&luggage);
			
			if(luggage==1){
			printf("cheak in succesfully");
			}
			else{
				printf("Extra luggage apply");
			}
		}
				
		else{
				printf("id proof required");
			}
		}
      	else{
				printf("No ticket, no entry");
	}

	
	
	return 0;
}
