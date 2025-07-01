#include "ft_stock_str.h"
<#include <stdlib.h>>

static int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static char	*ft_copydest(char *src)
{
	int		len;
	char	*dest;
	int i;

	len = 0;
	while (src[i])
		len++;
	i = 0;
	dest = malloc((sizeof(char *)) * (len + 1));
	if (!dest)
		return (0);	
	while (i <= len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

static void free_tab(t_stock_str *tab, int i)
{
	int index;

	index = 0;
	while (index < i)
	{
		free(tab[index].copy);
		index++;
	}
	free(tab);
}

t_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str *tab;
	int i;

	i = 0;
	tab = malloc((sizeof(t_stock_str *)) * (ac + 1));
	if (!tab)
		return (0);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_copydest(av[i]);
		if (!tab[i].copy)
		{
			free_tab(tab, i);
			return (0);
		}
		i++;
	}
	tab[ac].str = 0;
	tab[ac].copy = 0;
	tab[ac].size = 0;
	return (tab);
}