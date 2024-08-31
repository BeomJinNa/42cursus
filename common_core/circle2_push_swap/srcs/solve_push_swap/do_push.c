/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bena <bena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 05:25:40 by bena              #+#    #+#             */
/*   Updated: 2023/03/29 11:08:31 by bena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "s_stack.h"
#include "m_rules.h"

void	put_answer(t_status *stat, char answer);
void	push(t_stack *from, t_stack *to);

void	do_pa(t_status *stat)
{
	push(stat->b, stat->a);
	put_answer(stat, PA);
	stat->residual_elems++;
}

void	do_pb(t_status *stat)
{
	push(stat->a, stat->b);
	put_answer(stat, PB);
	stat->residual_elems--;
}
