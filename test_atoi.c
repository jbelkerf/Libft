#include "libft.h"
#include <stdio.h>

int main()
{
	printf("testing the atoi function\n");
	printf("\texpected : %d %d %d\n", atoi("-2147483648"), atoi("  \t 123"), atoi("   +-123"));
	printf("\tgot      : %d %d %d\n", ft_atoi("-2147483648"), ft_atoi("  \t 123"), ft_atoi("   +-123"));
	return (0);
}
