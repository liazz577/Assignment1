#include<stdio.h>
int main(){
	//input a
	int min;
	int a;
	scanf("%d",&a);
	//input b
	int b;
	scanf("%d",&b);
	//input c
	int c;
	scanf("%d",&c);
	min=a;
		if(b<min){
			min=b;
		   	 if(c<min){
		   	   printf("c la so nho nhat");
		   		}
		   	else{
		   		printf("b la so nho nhat");
			   }
		   }
	else{
	 	if(c<min){
	 		printf("c la so nho nhat");
	 		}
			 else{
	 			printf("a la so nho nhat");
			 }
		 }
}

