/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize_the_array_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bena <bena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:17:50 by bena              #+#    #+#             */
/*   Updated: 2023/03/31 05:58:55 by bena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "s_array_bonus.h"

void	normalize_the_array(t_array *array, t_array *index_table)
{
	int			index;
	int			target;
	const int	size = array->number_of_parameters;

	target = -1;
	while (++target < size)
	{
		index = -1;
		while (++index < size)
		{
			if (array->array[target] == index_table->array[index])
			{
				array->array[target] = index;
				break ;
			}
		}
	}
}
