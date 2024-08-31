/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_args.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bena <bena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:54:41 by bena              #+#    #+#             */
/*   Updated: 2023/06/22 21:58:03 by bena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_ARGS_H
# define S_ARGS_H

typedef struct s_args
{
	int	number_of_philosophers;
	int	time_to_die;
	int	time_to_eat;
	int	time_to_sleep;
	int	number_of_times_each_philosopher_must_eat;
}		t_args;
#endif
