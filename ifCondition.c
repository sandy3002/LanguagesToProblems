// This program explains if condition
#include<stdio.h>
int main()
{
  int a=5 , b=6 ;   //change value of a & b to see different cases
  if( a > b )       //first if part is executed. If it returns true then program control goes to next section
    printf("a is greater than b");
  else if( a == b ) //when if returns false control goes to else if part. There can be multiple of them.
    printf("a is equal to b");
  else              //when all the else if parts returns false, program control comes to else part.
    printf("a is less than b");
  return 0;
}
