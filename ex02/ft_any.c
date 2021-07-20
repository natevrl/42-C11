/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 22:11:00 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/19 22:11:01 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_tablen(char *tab)
{
	int i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

int	ft_any(char	**tab, int	(*f)(char*))
{
	int i;
	int tab_len;

	tab_len = ft_tablen(tab)
	i = 0;
	while (i < tab_len)
	{
		if ((*f)(tab[i]))
			return (1);
		i++;
	}
	return (0);
}

