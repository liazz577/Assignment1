#include <stdio.h>
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int arr[n];
	int tmp;
	for (int i=0; i<n; i++){
		bool f = false;
		do{
			printf("Nhap phan tu thu %d: ",i);	
			scanf("%d",&arr[i]);
			//kiem tra xem cac so tu 0-.i-1 da co gia tri cua arr[i] ko?
			for(int j=0;j<i;j++){
				if(arr[j] == arr[i]){
					f = true;
					printf("\nSo nay da ton tai, vui long nhap lai\n");
					break;
				}
			}
		}while(f);
	}
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
