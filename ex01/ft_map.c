/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 22:10:53 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/19 22:10:54 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
