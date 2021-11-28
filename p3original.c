#include <stdio.h>
int add( int *num1,int *num2);
{
  int result;
  result = *num1 + *num2;
	return result;
}
int main()
{
	int num1, num2, result;
	printf("Enter the two number: ");
	scanf("%d %d", &num1, &num2);
	result = add(&num1, &num2);
	printf("Addition of %d and %d is %d", num1, num2, result);
	return 0;
}
