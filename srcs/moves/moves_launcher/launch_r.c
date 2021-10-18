/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_r.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgarrido <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 09:54:18 by bgarrido          #+#    #+#             */
/*   Updated: 2021/09/15 09:57:11 by bgarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

void	ft_launch_ra(t_push *p)
{
	ft_ra(p);
	ft_printf("ra\n");
}

void	ft_launch_rb(t_push *p)
{
	ft_rb(p);
	ft_printf("rb\n");
}

void	ft_launch_rr(t_push *p)
{
	ft_ra(p);
	ft_rb(p);
	ft_printf("rr\n");
}
