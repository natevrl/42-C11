/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 22:11:21 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/19 22:46:22 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char	*s1, char	*s2)
{
	while (*s1 && *s2)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			break ;
	}
	return (*s1 - *s2);
}

void	ft_swaptab(char **a, char **b)
{
	char *c;

	c = *b;
	*b = *a;
	*a = c;
}

int ft_lentab(char **tab)
{
	int i;

	i = 0;
	while (*tab[i])
		i++;
	return (i);
}

void ft_sort_string_tab(char **tab)
{
	int i;
	int j;

	i = 0;
	while (i < ft_lentab(tab))
	{	
		j = 1 + i;
		while (j < ft_lentab(tab))
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
	char *strs[4] = {"ab", "aaaaaaaaaaaaa", "aaaa", "abcc"};
	int i;
	
	ft_sort_string_tab(strs);
	for (i = 0; i < 4; i++)
	{
		printf("%s\n", strs[i]);
	}
	return 0;
}
