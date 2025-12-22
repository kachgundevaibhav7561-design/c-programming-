// with parameter with returns//
#include<stdio.h>
int square(int num)
{
	return num*num;	
}
int max(int a,int b)
{
	if(a>b){
		return a;
	}else{
		return b;
	}
}
int main()
{
//	int result=square(7);
//	printf("square =%d\n",result);
	
	int result=max(43,56);
	printf("Maximun no=%d\n",result);
	return 0;
}
