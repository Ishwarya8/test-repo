#include<stdio.h>
#include "credit.h"  
  
int factorial(int n)  
{  
  if(n!=1)  
   {  
      return (n * factorial(n-1));  
   }  
      else return 1;  
}  
