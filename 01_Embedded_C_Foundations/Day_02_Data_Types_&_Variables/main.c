#include <stdio.h>

int main()
{
    /*----------------------------------------------------
      METHOD 1: Separate Declaration and Assignment
      Learned:
      1. Variables can be declared first.
      2. Values can be assigned later using = operator.
      3. Arithmetic operation result can be stored in
         another variable.
    ----------------------------------------------------*/

    unsigned char distanceA2B;
    unsigned char distanceB2C;
    unsigned char distanceA2C;

    distanceA2B = 160;
    distanceB2C = 40;
    distanceA2C = distanceA2B + distanceB2C;

    printf("Method 1 - Distance from A to C = %u\n", distanceA2C);


    /*----------------------------------------------------
      METHOD 2: Declaration with Initialization
      Learned:
      1. Variables can be declared and initialized
         in the same statement.
      2. This reduces the number of lines of code.
      3. Expressions can be used during initialization.
    ----------------------------------------------------*/

    unsigned char distanceA2B_2 = 160;
    unsigned char distanceB2C_2 = 40;
    unsigned char distanceA2C_2 = distanceA2B_2 + distanceB2C_2;

    printf("Method 2 - Distance from A to C = %u\n", distanceA2C_2);


    /*----------------------------------------------------
      METHOD 3: Direct Calculation in printf()
      Learned:
      1. Results do not always need to be stored
         in a variable.
      2. Expressions can be evaluated directly
         inside printf().
      3. Useful for simple calculations.
    ----------------------------------------------------*/

    unsigned char distanceA2B_3 = 160;
    unsigned char distanceB2C_3 = 40;

    printf("Method 3 - Distance from A to C = %u\n",
           distanceA2B_3 + distanceB2C_3);



    return 0;   // Program ends successfully
}
