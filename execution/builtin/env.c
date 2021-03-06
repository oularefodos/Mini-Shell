/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 15:56:26 by sakllam           #+#    #+#             */
/*   Updated: 2022/04/28 19:04:24 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../mini_shell.h"

int	ft_env(char **env)
{
	int	i;

	i = 0;
	if (!env)
		return (1);
	while (env[i])
	{
		if (ft_strchr('=', env[i]))
		{
			write (1, env[i], ft_strlen(env[i]));
			write (1, "\n", 1);
		}
		i++;
	}
	return (0);
}
