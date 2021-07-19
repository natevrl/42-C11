/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 22:11:14 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/19 22:11:15 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i = 0;
		if ((*f)(tab[i], tab[i + 1]) < 0 || (*f)(tab[i], tab[i + 1]) == 0)
		{
			while ((*f)(tab[i], tab[i + 1]) < 0 || (*f)(tab[i], tab[i + 1]) == 0)
			{
				if (i + 1 == length)
					return 1;
				i++;
			}
		}
		else if ((*f)(tab[i], tab[i + 1]) > 0 || (*f)(tab[i], tab[i + 1]) == 0)
		{
			while ((*f)(tab[i], tab[i + 1]) > 0 || (*f)(tab[i], tab[i + 1]) == 0)
			{
				if (i + 1 == length)
					return 1;
				i++;
			}
		}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int ft_cmp(int a, int b)
{
	return (a - b);
}

int main(int argc, char **argv)
{
	int tab[4] = {4, 5, 2, 1};
	printf("%d\n", ft_is_sort(tab, 4, &ft_cmp));

}
