/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_constant.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bena <bena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 18:10:44 by bena              #+#    #+#             */
/*   Updated: 2023/10/21 01:01:43 by bena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <math.h>

void	*vec_set_zero(t_vector buffer)
{
	buffer[0] = 0;
	buffer[1] = 0;
	buffer[2] = 0;
	return (buffer);
}

t_real	vec_get_polar_angle_phi(t_vector normal_unit)
{
	return (acosf(normal_unit[2]));
}

t_real	vec_get_polar_angle_theta(t_vector normal_unit)
{
	return (atan2f(normal_unit[1], normal_unit[0]));
}
