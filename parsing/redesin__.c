/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redesin__.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 01:14:58 by sakllam           #+#    #+#             */
/*   Updated: 2022/04/26 04:33:50 by foulare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mini_shell.h"

t_list	*passeover(t_list *lst)
{
	while (ft_redirectiononecon(lst))
	{
		lst = lst->next;
		if (lst && lst->type == SPACES)
			lst = lst->next;
		while (lst && (lst->type == WORD
				|| lst->type == WILD
				|| lst->type == SQ
				|| lst->type == DQ
				|| lst->type == VARIABLE))
			lst = lst->next;
		if (lst && lst->type == SPACES)
			lst = lst->next;
		break ;
	}
	return (lst);
}

t_list	*ft_redirectiontwo(t_list *lst, t_list *end, t_list **head)
{
	t_list	*node;

	if (*head && ft_lstlast(*head)->type != SPACES && lst->type != SPACES)
		ft_ohmyspace(head);
	while (lst != end)
	{
		if (ft_isthatared(lst))
			lst = passeover(lst);
		else
		{
			node = ft_createnodes(lst);
			ft_lstadd_back(head, node);
			lst = lst->next;
		}
	}
	if (lst && !ft_redirectiononecon(lst))
	{
		node = ft_createnodes(lst);
		ft_lstadd_back(head, node);
		lst = lst->next;
		lst = ft_creatspacenode(lst, head);
	}
	return (lst);
}

t_list	*ft_redirectionsset(t_list *lst)
{
	t_list	*end;
	t_list	*head;

	head = NULL;
	while (42)
	{
		end = ft_redirectionone(lst, &head);
		end = ft_redirectiontwo(lst, end, &head);
		lst = end;
		if (!lst)
			break ;
	}
	return (head);
}
