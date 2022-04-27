#include<stdio.h>
#include "array.h"
//test function to reverse elements of an array
int main(void)
{
    int arr[] = { 124, 2, 3, 9, 5 };
    int n = sizeof(arr)/sizeof(arr[0]);
 
    reverse(arr, n);
    print(arr, n);
 
    return 0;
}

