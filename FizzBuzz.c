#include <stdio.h>

int main(void)
{
    printf("How much times do you scan for a fizz or a buzz\n");

    int i;
    scanf("%d", &i);
    for (int d = 0; d < i; d++){

       if (d % 3 == 0 && d % 5 == 0){
        printf("FizzBuzz\n");
       }

       else if (d % 3 == 0){
        printf("Fizz\n");
       }
       else if (d % 5 == 0)
       {
           printf("Buzz\n");
       }
       else{
           printf("No Fizz or Buzz\n");
       }
    }

    return 0;
}
