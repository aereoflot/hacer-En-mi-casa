#include "ft_stock_str.h"
#include <stdlib.h>

static int	ft_strlen(char *s)
{
	int	i;

	
	while (s[i])
		i++;
	return (i);
}

static char	*ft_strdump(char *src)
{
	int		len;
	char	*dest;
	static int i;

	dest = malloc(len + 1);
	if (!dest)
		return (0);
	while
}
