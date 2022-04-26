#include <stdio.h>
int main(){
int n;
printf("nhap n=");
scanf("%d",&n);
int arr[n];
 // i < n-1
for (int i=0; i<nS; i++)
{
   for (int j=0; j<n-i; j++)
   {
        if (arr[j] < arr[j+1])
        {
           int temp = arr[j];
           arr[j] = arr[j+1];
           arr[j+1] = temp;
        }
   }
}
for(int i=0;i<n;i++){
	printf("%d      ",arr[i]);
}
}
//nhap 1 mang n so nguyen sap xep mang do theo tt tu lon den be
