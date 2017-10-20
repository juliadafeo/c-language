/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
    float fahr, celsius;
    int lower, step, upper;
    
    lower = -35;
    step = 5;
    upper = 40;
    
    celsius = lower;
    
    printf("%3s %6s\n", "C", "F");
    
    while (celsius <= upper) {
        
        fahr = 9/5.0*celsius + 32.0;
        
        printf("%3.0f %6.1f\n", celsius, fahr);
        
        celsius = celsius + step;
    }
}



