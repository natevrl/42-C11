#include <stdlib.h>
int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *return_tab;
	
	return_tab = (int *)malloc(sizeof(int) * length)
	if (!return_tab)
		return NULL;
	while (i < length)
	{
		return_tab[i] = (*f)(tab[i]);
		i++;
	}
	return (return_tab);
}
