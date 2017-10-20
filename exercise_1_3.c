#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, step, upper;
    
    lower = 0;
    step = 20;
    upper = 300;
    
    fahr = lower;
    
    printf("%3s %6s\n", "F", "C");
    while (fahr <= upper) {
        celsius = 5/9.0*(fahr - 32.0);
        printf("%3.0f %6.2f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
