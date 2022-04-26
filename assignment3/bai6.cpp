//tim fibonaci
#include <stdio.h>
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	
	int x0=0, x1=1, x2=1;
	for(;x1+x2<n;){
		x0=x1;
		x1=2;
		x2=x0+x1;
// while ( n!=0){
//t=t*10+n%10;
//n/=10;
//}
	}
	printf("so can tim: %d\n",x2);
}
