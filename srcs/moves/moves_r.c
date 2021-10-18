/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_r.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgarrido <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 09:53:31 by bgarrido          #+#    #+#             */
/*   Updated: 2021/09/15 09:53:32 by bgarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_ra(t_push *p)
{
	int	count;
	int	aux;

	aux = p->a[0];
	count = 0;
	while (count < (p->size_a - 1))
	{
		p->a[count] = p->a[count + 1];
		count++;
	}
	p->a[p->size_a - 1] = aux;
}

void	ft_rb(t_push *p)
{
	int	i;
	int	aux;

	i = 0;
	if (p->size_b > 1)
	{
		aux = p->b[i];
		while (i < p->size_b)
		{
			p->b[i] = p->b[i + 1];
			i++;
		}
		p->b[i - 1] = aux;
	}
}

void	ft_rr(t_push *p)
{
	ft_ra(p);
	ft_rb(p);
}
