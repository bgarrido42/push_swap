/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgarrido <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 09:54:05 by bgarrido          #+#    #+#             */
/*   Updated: 2021/09/15 09:57:09 by bgarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

void	ft_launch_pa(t_push *p)
{
	ft_pa(p);
	ft_printf("pa\n");
	p->size_a++;
	p->size_b--;
}

void	ft_launch_pb(t_push *p)
{
	ft_pb(p);
	ft_printf("pb\n");
	p->size_b++;
	p->size_a--;
}
