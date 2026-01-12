/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garakizt <garakizt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 11:11:40 by garakizt          #+#    #+#             */
/*   Updated: 2026/01/12 11:46:29 by garakizt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int is_sep(char c)
{
    return (c <= 32);
}

int count_words(char *str)
{
    int i = 0, flag = 0, count = 0;
    
    while (str[i])
    {
        if (is_sep(str[i]))
            flag = 0;
        else if (flag == 0)
        {
            count++;
            flag = 1;
        }        
        i++;
    }
    return (count);
}

char *copy_word(char *str)
{
    int i = 0, len = 0;
    char *word;

    while (str[len] && !is_sep(str[len]))
        len++;
    word = (char *)malloc((len + 1) * sizeof(char));
    if (!word)
        return (NULL);
    while (i < len)
    {
        word[i] = str[i];
        i++;
    }
    word[len] = '\0';
    return (word);
}

char    **ft_split(char *str)
{
    int i = 0, words = count_words(str);
    char **result;

    result = (char **)malloc((words + 1) * sizeof(char *));
    if (!result)
        return (NULL);
    while (*str)
    {
        if (!is_sep(*str))
        {
            result[i] = copy_word(str);
            if (!result[i])
                return (NULL);
            i++;
            while (*str && !is_sep(*str))
                str++;
        }
        else
            str++;
    }
    result[i] = 0;
    return (result);
}