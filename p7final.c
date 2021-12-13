#include<stdio.h>
int main()
{
    int size, i, sum=0;
    printf("Enter array size:");
    scanf("%d",&size);
    int a[size];
    printf("Enter array elements:");
    for(i = 0; i < size; i++)
          scanf("%d",&a[i]);
    for(i = 0; i < size; i++)
          sum = sum + a[i];
    printf("Sum of the array = %d\n",sum);
     return 0;
}
