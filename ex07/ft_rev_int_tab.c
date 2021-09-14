/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpark <chpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 20:47:30 by chpark            #+#    #+#             */
/*   Updated: 2021/09/14 20:56:24 by chpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rec_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	chain;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		chain = tab[i];
		tab[i] = tab[j];
		tab[j] = chain;
		i++;
		j--;
	}
}
