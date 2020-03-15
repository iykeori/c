#include <stdio.h>

int main(){

    int a = 12;
    int b = 25;

    printf("\n%d\n", a & b) ;

    /*
        BITWISE AND
        12=> 00001100 => 2^2 + 2^3
        25=> 00011001 => 2^0 + 2^3 + 2^4
        ---------------
             00001000 => 2^3 => 8

    */


    printf("%d\n", a | b);

     /*
        BITWISE OR
        12=> 00001100 => 2^2 + 2^3
        25=> 00011001 => 2^0 + 2^3 + 2^4
        ---------------
             00011101 => 2^0 + 2^2 + 2^3 +2^4 => 29

    */

   printf("%d\n", a ^ b);

     /*
        BITWISE XOR (matching 1s switched to 0)
        12=> 00001100 => 2^2 + 2^3
        25=> 00011001 => 2^0 + 2^3 + 2^4
        ---------------
             00010101 => 21

    */

   printf("%d\n", ~a);
   // bitwise complement ~N => -(N+1) => -13

    return 0;

}