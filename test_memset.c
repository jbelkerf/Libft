#include "libft.h"
#include <string.h>

int main()
{
	int b = 0;
	char *c = &b;


	memset(c+3, 255 , 1);
	memset(c+2, (-112233 / 65536)-1 , 1);
	memset(c+1, (-112233/ 256)-1, 1);
	memset(c, -112233, 1);

	printf("%d\n",b);
}
