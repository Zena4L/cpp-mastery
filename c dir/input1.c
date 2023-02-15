#include <stdio.h>
#include <ctype.h>

/**
 * desc - lower: convert input to lowercase
*/
int main()
{
    int c;
    while ((c = getchar()) != EOF)
    {
        putchar(tolower(c));
    }
    

    return 0;
}