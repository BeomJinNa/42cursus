/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bena <bena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 19:14:29 by bena              #+#    #+#             */
/*   Updated: 2023/09/29 17:37:39 by bena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "s_list.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == 0)
		return ;
	if (del != NULL)
		del(lst->content);
	free(lst);
}
