/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_rr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgarrido <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 09:54:44 by bgarrido          #+#    #+#             */
/*   Updated: 2021/09/15 09:54:45 by bgarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

void	ft_launch_rra(t_push *p)
{
	ft_rra(p);
	ft_printf("rra\n");
}

void	ft_launch_rrb(t_push *p)
{
	ft_rrb(p);
	ft_printf("rrb\n");
}

void	ft_launch_rrr(t_push *p)
{
	ft_rra(p);
	ft_rrb(p);
	ft_printf("rrr\n");
}
