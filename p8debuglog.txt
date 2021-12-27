#include <stdio.h>
#include <math.h>
float input()
{
  float n ;
  printf("Enter the number:");
  scanf("%f",&n);
  return n;
}
float my_sqrt(float n)
{
  float sqrt_result, temp;
  sqrt_result = n / 2;
  temp = 0;
  while (fabs (sqrt_result - temp)> 0.000001)
  {
    temp = sqrt_result;
    sqrt_result = ((n/temp) + temp) / 2;
  }
  return sqrt_result;
}
  void output(float n,float sqrt_result)
  {
    printf("The square root of %f is %f",n,sqrt_result);
  }
  int main()
  {
    float n = input ();
    float sqrt_result = my_sqrt(n);
    output(n,sqrt_result);
    return 0;
  }
 
