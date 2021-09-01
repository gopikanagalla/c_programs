#include <stdio.h>
#include <string.h>
int my_strlcat(char *restrict dst, const char *restrict src, int dstsize)
{
    int d_len,s_len,offset,src_index;
    d_len = strlen(dst);
    s_len = strlen(src);
    offset = d_len;
    src_index = 0;
    while( *(src+src_index) != '\0' )
    {
        *(dst+offset) = *(src+src_index);
        offset++;
        src_index++;
        if( offset==dstsize-1)
            break;
    }
    *(dst+offset) = '\0';
  return( d_len+s_len );
}
int main()
{
	char first[] = "gopika";
	char last[] = "nagalla";
	int r;
	int size = 34;
	char buffer[size];

	strcpy(buffer,first);
	r = my_strlcat(buffer,last,size);

	printf("%s\n",buffer);
	printf("Value returned: %d\n",r);
	if( r > size )
		printf("String truncated\n");
	else
		printf("String was fully copied\n");

	return(0);
}
