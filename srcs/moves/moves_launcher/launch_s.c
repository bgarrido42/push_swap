/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgarrido <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 09:54:56 by bgarrido          #+#    #+#             */
/*   Updated: 2021/09/15 09:54:57 by bgarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

void	ft_launch_sa(t_push *p)
{
	ft_sa(p);
	ft_printf("sa\n");
}

void	ft_launch_sb(t_push *p)
{	
	ft_sb(p);
	ft_printf("sb\n");
}

void	ft_launc_ss(t_push *p)
{
	ft_sa(p);
	ft_sb(p);
	ft_printf("ss\n");
}
