/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 19:39:12 by moduwole          #+#    #+#             */
/*   Updated: 2022/09/03 19:39:12 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate1(t_node **a, t_node **b, char c)
{
	t_node	*tmp;
	t_node	*tmp1;
	t_node	*tmp2;

	tmp = *a;
	tmp1 = tmp->next;
	tmp2 = tmp;
	while (tmp2->next)
		tmp2 = tmp2->next;
	tmp2->next = tmp;
	tmp->next = NULL;
	*a = tmp1;
	if (c == 'r')
		rotate1(b, a, 'c');
}

void	reverse1(t_node **a, t_node **b, char c)
{
	t_node	*tmp;
	t_node	*tmp1;
	t_node	*tmp2;

	tmp = *a;
	tmp1 = tmp;
	while (tmp1->next->next)
		tmp1 = tmp1->next;
	tmp2 = tmp1->next;
	tmp2->next = tmp;
	tmp1->next = NULL;
	*a = tmp2;
	if (c == 'R')
		reverse1(b, a, 'c');
}

int	cost(t_node *head_a, t_node *head_b, t_node *x)
{
	int		i;
	t_node	*a;
	t_node	*b;

	i = 0;
	a = NULL;
	b = NULL;
	duplicate(head_a, head_b, &a, &b);
	cost_div1(&a, &b, &x, &i);
	cost_div2(&a, &b, &x, &i);
	clear(&a);
	clear(&b);
	return (i);
}

void	putcost(t_node **head_a, t_node **head_b)
{
	t_node	*tmp;

	tmp = *head_b;
	while (tmp)
	{
		tmp->cost = cost(*head_a, *head_b, tmp);
		tmp = tmp->next;
	}
}

t_node	*choose(t_node **b)
{
	int		min;
	t_node	*tmp;
	t_node	*tmp1;

	tmp = *b;
	tmp1 = tmp;
	min = tmp->cost;
	while (tmp)
	{
		if (tmp->cost < min)
		{
			min = tmp->cost;
			tmp1 = tmp;
		}
		tmp = tmp->next;
	}
	return (tmp1);
}
