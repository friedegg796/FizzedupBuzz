#include <stdio.h>

int main(void)
{
    printf("How much times do you wish to fizz a buzz\n");

    int i = scanf();
    for ( i < 100; i++){

       if (i % 3 == 0 && i % 5 == 0){
        printf("FizzBuzz");
       }

       else if (i % 3 == 0){
        printf("Fizz\n");
       }
       else if (i % 5 == 0)
       {
           printf("Buzz\n");
       }
    }

    return 0;
}
