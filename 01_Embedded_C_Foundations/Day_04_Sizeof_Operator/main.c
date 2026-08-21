#include <stdio.h>

int main()
{
    /*------------------------------------------------------------------
      DAY 04: Hardware Evaluation via Sizeof Operator
      
      CORE EMBEDDED LEARNINGS:
      1. sizeof() is evaluated at compile-time, causing zero runtime overhead.
      2. It accepts both primitive type names and instantiated active variables.
      3. RAM Optimization: Storing size metadata inside a 'char' container (1 byte) 
         instead of a standard 'int' (4 bytes) saves micro-buffers in SRAM.
    ------------------------------------------------------------------*/

    // =================================================================
    // CODE 1: Primitive Type Size Validation
    // =================================================================
    printf("--- Code 1: Primitive Sizing Maps ---\n");
    printf("Size of char data type      = %d byte(s)\n", (int)sizeof(char));    
    printf("Size of short data type     = %d byte(s)\n", (int)sizeof(short)); 
    printf("Size of int data type       = %d byte(s)\n", (int)sizeof(int));    
    printf("Size of long data type      = %d byte(s)\n", (int)sizeof(long));
    printf("Size of long long data type = %d byte(s)\n\n", (int)sizeof(long long));    


    // =================================================================
    // CODE 2: Variable Layout Sizing Verification
    // =================================================================
    printf("--- Code 2: Instantiated Variable Sizing ---\n");
    long long MyLongHistory = 900;

    printf("Size of char data type      = %d byte(s)\n", (int)sizeof(char));    
    printf("Size of short data type     = %d byte(s)\n", (int)sizeof(short)); 
    printf("Size of int data type       = %d byte(s)\n", (int)sizeof(int));    
    printf("Size of long data type      = %d byte(s)\n", (int)sizeof(long));
    printf("Size of long long variable  = %d byte(s)\n\n", (int)sizeof(MyLongHistory));    


    // =================================================================
    // CODE 3: Memory Optimized Variable Tracking
    // =================================================================
    printf("--- Code 3: Optimized Buffer Assignment ---\n");
    
    // Memory Optimization: Allocating 1 byte (char) instead of 4 bytes (int) 
    // since runtime sizing limits strictly evaluate under 255 bytes thresholds.
    char memory_optimized_size = sizeof(MyLongHistory);

    printf("Size of char data type      = %d byte(s)\n", (int)sizeof(char));    
    printf("Size of short data type     = %d byte(s)\n", (int)sizeof(short)); 
    printf("Size of int data type       = %d byte(s)\n", (int)sizeof(int));    
    printf("Size of long data type      = %d byte(s)\n", (int)sizeof(long));
    printf("Size of long long variable  = %d byte(s)\n", memory_optimized_size);    

    return 0;
}
