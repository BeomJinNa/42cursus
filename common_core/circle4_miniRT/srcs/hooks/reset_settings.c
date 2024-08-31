/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reset_settings.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bena <bena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 04:37:17 by bena              #+#    #+#             */
/*   Updated: 2023/10/25 08:56:07 by bena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stat.h"

void	reset_settings(t_stat *stat)
{
	t_cam *const	cam = &stat->data.cam;

	cam->fov = stat->data.cam_init_fov;
	cam->image.exposure = 1.0f;
	vec_copy(cam->position, stat->data.cam_init_position);
	vec_copy(cam->normal_unit, stat->data.cam_init_direction);
	re_render_image_on_mlx(stat);
}
