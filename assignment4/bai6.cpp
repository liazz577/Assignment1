#include <stdio.h>
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	
	bool f = true;// int t=0;
	while(n!=0){
		int sd = n%10;
		if(sd%2==0){
			f = false;
			printf("%d ko phai toan chu so le",n);
			break;
		}
		n/=10;
	}
	if(f){
		printf("%d toan chu so le", n);
	}
}

