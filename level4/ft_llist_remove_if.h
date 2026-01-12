/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garakizt <garakizt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 13:46:34 by garakizt          #+#    #+#             */
/*   Updated: 2026/01/12 13:51:48 by garakizt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_REMOVE_IF_H
#define FT_LIST_REMOVE_IF_H

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

#endif
