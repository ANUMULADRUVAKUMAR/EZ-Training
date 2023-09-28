#include<stdio.h>  
  
int factorial(int n)  
{  
  if (n == 0)  
    return 1;  
  else  
    return(n * factorial(n-1));  
}  
   
main()  
{  
  int number;  
  long fact;  
  printf("Enter a number:");  
  scanf("%d", &number);
  printf("Factorial is %d",factorial(number));
}
