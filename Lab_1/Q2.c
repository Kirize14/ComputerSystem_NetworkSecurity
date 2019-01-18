#include <stdio.h>
/* This is a comment */

int main()
{
    char strcpy2(char dest[], const char source[]) 
    {
        int i = 0;
        while ((dest[i] = source[i]) != '\0')
        {
            i++;
        }
        return dest;
    }
    strcpy2("Ey","Test");
    printf("Hello, world!\n");
    return 0;
}
