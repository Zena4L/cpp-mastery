#include <stdio.h>
#include <ctype.h>

/**
 * desc- this program convert from upper to lower or lower to upper
 * ./prog u - to upper
 * ./prog l - to lower
*/

int toUp(int c);
int toLo(int c);


int main(int argc, char *argv[])
{
    int c;

    if(*argv[1] == 'u')
    {
        // while ((c = getchar()) != EOF)
        // {
        //     putchar(toupper(c));
        // }
        toUp(c);
        
    }else if(*argv[1] == 'l')
    {
        // while ((c = getchar()) != EOF)
        // {
        //     putchar(tolower(c));
        // }
        toLo(c);
    }else{
        printf("No args\n");
    }


}
int toUp(int c){

    while ((c = getchar()) != EOF)
    {
        putchar(toupper(c));
    }
}
int toLo(int c){

    while ((c = getchar()) != EOF)
    {
        putchar(tolower(c));
    }
}