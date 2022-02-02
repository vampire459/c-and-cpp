#include <stdio.h>

void main() {
    
    /* 
        variables and arithmetic
        C = (5/9)(F-32)
     
    */

    int far, cels;
    int lower, upper, step;

    lower = 0;       /* lower limit */
    upper = 300;     /* Upper limit */
    step= 20;        /* Step size */

    far = lower;
    while (far <= upper)
    {
        
        cels = (5/9) * (far - 32);
        
        printf("%d\t%d\n", far, cels);
        far = far + step;

    }
    


}