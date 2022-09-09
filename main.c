/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 19:08:09 by moduwole          #+#    #+#             */
/*   Updated: 2022/08/15 19:08:09 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*head;

	head = NULL;
	if (argc > 1)
	{
		if (!checks(argv))
			return (2);
		get_list(argv, &head);
		if (extra_case(head))
			return (3);
		push_swap(&head);
		clear(&head);
		return (0);
	}
	return (4);
}
