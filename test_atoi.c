#include "libft.h"
#include <stdio.h>

int main()
{
	printf("testing the atoi function\n");
	printf("\texpected : %d %d %d\n", atoi("57585666621474836489999999"), atoi("  \t 123"), atoi("   +-123"));
	printf("\tgot      : %d %d %d\n", ft_atoi("575666621474836489999999"), ft_atoi("  \t 123"), ft_atoi("   +-123"));
	return (0);
}
