#include <stdio.h>


int primeNumbers ( int a){

       int counter=1;

       int b = a/2;

       for (int i=2; i<= b; i++){

             if ( a % i == 0 ) {

                   counter = 0;

                   break;

            }

       }

       return counter;

}


int main () {

     int x, y;

     int counter;

      printf("enter the first number of interval: ");

     scanf("%d", &x);

     printf(" enter the second number of interval: ");

     scanf("%d", &y);

     for (int i=x +1; i< y ; i++) {

             counter = primeNumbers(i);

              if (counter == 1) {

                    printf("prime numbers are:  %d \n", i);

               }

      }

      return 0;

}