#include <stdio.h>
int main()
{
	int n;
	printf("nhap n=");
	scanf("%d",&n);
    int ary[n];
    int i, total, high;
    for(i=0; i<n; i++)
    {
	scanf("%d",&ary[i]);
    }
    high = ary[0];
    for(i=1; i<n; i++)
    {
        if(ary[i] > high)
            high = ary[i];
    }
    printf("\n So lon nhat trong mang la %d", high);
}


