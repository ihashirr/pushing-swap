/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhashir <mhashir@student.42abudhabi.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:39:36 by mhashir             #+#    #+#             */
/*   Updated: 2022/09/01 17:55:30 by mhashir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"
void print_stack(t_stack *a)
{
    while (a)
    {
        printf("%d\n", a->nbr); 
        a = a->next;
    }
}
int	main(int argc, char **argv)
{
	t_stack	*a;

	a = ft_process(argc, argv);
	print_stack(a);
	if (!a || ft_checkdup(a))
	{
		ft_free(&a);
		ft_error();
	}
	if (!ft_checksorted(a))
		ft_sort(&a);
	print_stack(a);
	ft_free(&a);
	return (0);
}
