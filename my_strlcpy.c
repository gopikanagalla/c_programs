#include <stdio.h>

int my_strlcpy(char *restrict dst, const char *restrict src, int dstsize)
{
    int offset=0;
    if( dstsize > 0 )
    {
        while( *(src+offset) != '\0' )
        {
            if( offset==dstsize )
            {
                offset--;
                break;
            }
            *(dst+offset) = *(src+offset);
            offset++;
        }
    }
    *(dst+offset) = '\0';
    while( *(src+offset) != '\0' )
        offset++;
    return(offset);
}

void display(int size)
{
    char string[] = "This is strlcpy program";
    char buffer[24];
    int r;

    r = my_strlcpy(buffer,string,size);

    printf("Copied '%s' into '%s'\t", string,buffer);
    printf("length:%d\n",r);
}

int main()
{
    display(24);
    display(10);
    display(1);

    return 0;
}
