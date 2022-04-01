#include<stdio.h>
#include"factorial.h"

int number;
// Note: Don't add any other printf statement which will impact test cases. 
//Also don't change main function, focus function implementation only
int factorial(int number)
{
    // TODO:- Your logic here
    if(number==0){
        return 1;
    }else if(number<0){
      return -1;
    }
    else{
        return (number*factorial(number-1));
    }

}
int main() {
  int num = 0, N = 0;
    scanf("%d", &num);
    printf("%d\n",factorial(num));
    
  return 0;
}