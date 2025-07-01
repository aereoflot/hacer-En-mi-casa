#include <stdio.h>
#include "ft_stock_str.h"
#include <stdlib.h>

static void print_tab(t_stock_str *tab)
{
	int i = 0;
	while (tab[i].str)
	{
		printf("[%d] size=%d  str=\"%s\"  copy=\"%s\"\n",
			i, tab[i].size, tab[i].str, tab[i].copy);
		i++;
	}
}

int	main(void)
{
	char *words[] = {"hola", "42", "", "piscine", NULL};
	int    n = 4;

	t_stock_str *tab = ft_strs_to_tab(n, words);
	if (!tab)
		return (printf("Error de malloc\n"), 1);
	print_tab(tab);

	/* libera */
	for (int i = 0; i < n; i++)
		free(tab[i].copy);
	free(tab);
	return (0);
}
