/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   some_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgarrido <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 09:52:09 by bgarrido          #+#    #+#             */
/*   Updated: 2021/09/15 10:29:53 by bgarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_init_struct(t_push *p, int size)
{
	p->a = (int *)malloc (sizeof(int) * (size));
	p->aux = (int *)malloc (sizeof(int) * (size));
	p->b = ft_calloc((size), sizeof(int));
	p->size_a = size;
	p->size_b = 0;
}

void	ft_some_args(t_push *p, int argc, char *argv[])
{
	int	i;

	i = 0;
	ft_init_struct(p, argc - 1);
	while (i < (p->size_a))
	{
		p->a[i] = ft_atoi_special(argv[i + 1], p);
		p->aux[i] = ft_atoi_special(argv[i + 1], p);
		if (p->a[i] == 0)
			ft_check_str_or_num(argv[i + 1]);
		i++;
	}
}
