#include <stdio.h>
#include<conio.h>

int main()
{
 int number;
 printf("Enter the positive integer to check for prime or composite\n");
 scanf("%d",&number);

 for(counter = 2; counter <= number/2; counter++)
 {

  if( (number % counter) == 0 ){
   isprime = 1;
   break;
  }

 }
 else{
  printf("%d is a composite number",number);
 }

 return 0;
}

