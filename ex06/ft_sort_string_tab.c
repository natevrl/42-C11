int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = -1;

	while (s1[++i] && s2[i])
		if (s1[i] != s2[i])
			return s1[i] - s2[i];
	return (0);
}

void	ft_swaptab(char **a, char **b)
{
	char *c;

	c = *b;
	*b = *a;
	*a = c;
}

void ft_sort_string_tab(char **tab)
{
	int i;
	int j;

	i = 0;
	while (tab[i])
	{	
		j = 1 + i;
		while (tab[j])
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				ft_swaptab(tab + i, tab + j);
			}
			j++;
		}
		i++;
	}
}

#include <stdio.h>

int main()
{
	char *strs[4] = {"5776", "356", "333", "1234"};
	int i;

	for (i = 0; i < 4; i++)
	{
		printf("%s\n", strs[i]);
	}
	ft_sort_string_tab(strs);
	for (i = 0; i < 4; i++)
	{
		printf("%s\n", strs[i]);
	}
	return 0;
}
