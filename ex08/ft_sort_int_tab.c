/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpark <chpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 20:57:20 by chpark            #+#    #+#             */
/*   Updated: 2021/09/14 21:12:52 by chpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	chain;

	i = 0;
	j = i + 1;
	while (j < (size - 1))
	{
		if (tab[i] < tab [j])
		{
			chain = tab[i];
			tab[i] = tab[j];
			tab[j] = chain;
		}
		i++;
	}
	if (tab[0] < tab[1])
	{
		ft_sort_int_tab(int *tab, int size);
	}
}
