#include <stdio.h>
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int arr[n];
	printf("nhap mang:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	int count =0;
	int max=0;
	
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			count++;
			if(count>max){
				max=count;
			}
		}else{
			count =0;
		}	
	}
	printf("So luot nhieu nhat: %d",max);
}
