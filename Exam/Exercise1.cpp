#include<stdio.h>
int main()
{
  int n;
  float S;
  S = 0;
  do
  {
    printf("\nInput n: ");
    scanf("%d", &n);
    if(n < 1)
    {
      printf("\n n must be bigger or equal to 1, please input a different number !");
    }
  }while(n < 1);

  for(int i = 1; i <= n; i++){
    S = S + 1.0 / i;
  }
  printf("\nThe total sum of 1 + 1/2 + ... + 1/%d is: %.2f",n, S);

}
