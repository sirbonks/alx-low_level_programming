#include <stdio.h>                                               
#include <stdlib.h>                                              
#include <time.h>                                                
/**                                                              
 * main - Entry point                                            
 *
 * Return: Always 0 (success)
 */                                                              

int main(void)                                                   

{                                                                
	        int n;                                                   

	          srand(time(0));
		  n = rand() - RAND_MAX / 2;
		  if  (n > 0)  
			  prinf("%d is positive\n", n);
		  else if (n == 0) 
			  print("%d is zero\n", n);
		  else    
			  printf("%d is negative\n", n);
		  return (0);                                              
}  
