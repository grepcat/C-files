/****************************************************
File:       hello.c
Purpose:    Display a simple message on the screen 
*****************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main (void)
{
    printf("hello, world\n");
    printf("fibonacci this mother fudgers!\n");

/*
 * do the fibonacci thing
 */
    int x, y, z;
    x=0;
    y=1;

    while (x < 255) {
	    printf("%d\n", x);
	    z = x+y;
	    x = y;
	    y = z;
    
    }

    /*
     * now do some fancy pants printing
     */
    /* RH put this change in right here*/
    printf("RH_change starts here\n");
    printf("Look here :-) \n");
    printf("Change over, back to printing\n\n");
    /*Change over man!*/ 
    printf("CHAR_BIT    :   %d\n", CHAR_BIT);
    printf("CHAR_MAX    :   %d\n", CHAR_MAX);
    printf("CHAR_MIN    :   %d\n", CHAR_MIN);
    printf("INT_MAX     :   %d\n", INT_MAX);
    printf("INT_MIN     :   %d\n", INT_MIN);
    printf("LONG_MAX    :   %ld\n", (long) LONG_MAX);
    printf("LONG_MIN    :   %ld\n", (long) LONG_MIN);
    printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
    printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
    printf("SHRT_MAX    :   %d\n", SHRT_MAX);
    printf("SHRT_MIN    :   %d\n", SHRT_MIN);
    printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
    printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX);
    printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX);
    printf("USHRT_MAX   :   %d\n", (unsigned short) USHRT_MAX);

/* Took out this section on values for a git hub change test */
/* Ubuntu made this change */
		printf(" The previous section on floating point types has been removed\n");
		printf(" This was made by the Ubuntu VM\n");
    return(0);
}
