#include <stdio.h>
#include <math.h>
int main(){
	int n;
	do{
		printf("Nhap n=");
		scanf("%d",&n);
	}while(n<=0);
	
	for(int i=1;i<n;i++){
	if(i%2!=0){
		int i2=i;
		//tim so dao nguoc cua i2
		 int t=0;
		 while(i2!=0){
		 t=t*10+i2%10;
		 i2/=10;
	}
	printf("so dao nguoc: %d\n",t);
        //
}
}
}

