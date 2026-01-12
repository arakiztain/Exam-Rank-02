/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garakizt <garakizt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 12:11:02 by garakizt          #+#    #+#             */
/*   Updated: 2026/01/12 12:34:44 by garakizt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
#define LIST_H

typedef struct      s_list
{
    int             data;
    struct s_list   *next;
}                   t_list;

#endif