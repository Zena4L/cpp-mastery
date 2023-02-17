#include <stdio.h>

/**
 * d -  cat:  concatenate files, version 1
 * fp - file pointer
*/
void filecopy(FILE *,FILE *);

int main(int argc, char *argv[])
{
    FILE *fp;

    if(argc == 1) /*no arg , copy standard input*/
        filecopy(stdin,stdout);
    else
        while (--argc > 0)
        {
            if((fp = fopen(*++argv,"r")) == NULL){
                printf("cat: can't open %s\n",*argv);
                return 1;
            }else{
                filecopy(fp,stdout);
                fclose(fp);
            }
        }
        
    return 0;
}

/**
 * ifp - input file pointer
 * ofp - output file pointer
 * while ifp is not end of file, print c to ofp
*/
void filecopy(FILE *ifp,FILE *ofp)
{
    int c;
    while ((c= getc(ifp)) != EOF)
    {
        putc(c,ofp);
    }
    
}