/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nomore.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 05:00:43 by sakllam           #+#    #+#             */
/*   Updated: 2022/04/26 05:01:20 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mini_shell.h"

void	ft_normingit(int *spaces, char **line, int *i)
{
	*spaces = 0;
	ft_whiterun(line);
	*i = 0;
}