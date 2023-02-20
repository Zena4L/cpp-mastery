/*A low level I/O*/
#include <unistd.h>

#include <fcntl.h>

#define BUFSIZE 1092

int main()
{
    char buf[BUFSIZE];
    int n;

    while((n = read(0,buf,BUFSIZE)) > 0)
        write(1,buf,n);
    

    
    return 0;
}