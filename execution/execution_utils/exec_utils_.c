/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_utils_.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 01:43:41 by sakllam           #+#    #+#             */
/*   Updated: 2022/04/27 00:12:21 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../mini_shell.h"

char	*ft_match(char *splited, char *cmd)
{
	char	*path;

	if (!*cmd)
		return (NULL);
	path = ft_alphajoin(cmd, splited);
	if (ft_checkexistence(path) == 2)
		return (path);
	return (NULL);
}

char	*ft_searchandconcat(char **splited, char *cmd)
{
	int		i;
	char	*path;

	i = 0;
	while (splited[i])
	{
		path = ft_match(splited[i], cmd);
		if (path)
			break ;
		i++;
	}
	return (path);
}
