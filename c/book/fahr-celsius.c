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
        
        cels = (5) * (far - 32) / (9);
        
        printf("%3d\t%8d\n", far, cels);

        /* 

            the number before d specifies what 
            the width aka position of the first one should be. just run it

        */

        far = far + step;

    }
    


}