#include <stdarg.h>
#include <stdio.h>

/**
 * minprintf - is a minimal printf
*/

void minprintf(char *fmt,...);
/* minprintf: minimal printf with variable argument list */
void minprintf(char *fmt,...)
{
    va_list ap; /* points to each arguements in turn*/
    char *p,*sval;
    int ival;
    double dval;

    va_start(ap,fmt); /* make ap points to the first unmaned arg*/

    for(p = fmt; *p; p++){
        if(*p != '%'){
            putchar(*p);
            continue;
        }
        switch (*++p)
        {
        case 'd':
            ival = va_arg(ap,int);
            printf("%d",ival);
            break;
        case 'f':
            dval = va_arg(ap,double);
            printf("%f",dval);
        case 's':
            for(sval = va_arg(ap, char *); *sval ; sval++ )
                putchar(*sval);
            break;
        
        default:
            putchar(*p);
            break;
        }
    }
    va_end(ap);
}

int main()
{
    int x = 5;
    minprintf("%d",x);
    return 0;
}