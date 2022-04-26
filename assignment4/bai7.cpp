#include <stdio.h>
int main(){
	int a,b;
	do{
		printf("Nhap so nguyen duong a=");
		scanf("%d",&a);
		printf("Nhap so nguyen duong b =");
		scanf("%d",&b);
	}
		//while(a <=0 || a>=b);
		//thoat ra dc day khi b>a && a>0
		//while( !( b>a && a>0));
		while( !( b>a && a>0));
		for (int i=a;i <= b; i++){
			//kiem tra i co phai SNT hay khong
			if(i==1){
				continue;
			}
			if(i<4){ //chi co the la 2 hoac 3
				printf("SNT: %d\n", i);
			
			//i>=4
			}
			bool f = true;
			//for(int j=1;j<=i)
			//int c=0;
			for (int j=2; j<=i/2;j++){
				if(i%j==0){
					f=false;
					break;
				}
			}
			if(c==2){
				printf("SNT: %d\n",i);
			}
}
}
