/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerica <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 13:42:03 by nerica            #+#    #+#             */
/*   Updated: 2024/07/06 14:50:01 by nerica           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libftprintf/libft.h"
# include <stdlib.h>
# include <limits.h>

typedef struct s_item	t_item;
struct s_item
{
	int		value;
	int		pos;
	int		cost;
	int		idx;
	t_item	*next;
	t_item	*previous;
};
typedef struct s_list	t_list;
struct s_list
{
	int		len;
	t_item	*first;
	t_item	*last;
};	
char	**formatargv(int argc, char *argv[]);
int		len(char **tab);
int		check_double(char **tab);
int		ft_isspace(char str);
int		check_not_numerical(char **tab);
void	printlist(t_list	*stack);
t_list	*initialize(void);
t_list	*Stacking_end(t_list *stack, int data);
t_list	*Stacking_front(t_list *stack, int data);
void	get_pos(t_list *stack);
void	indexing(t_list *stack);
void	swap(t_list *stack);
void	rotate(t_list *stack);
void	rev_rotate(t_list *stack);
void	push(t_list *stack1, t_list *stack2);
int	move_rotate_rev(t_list *a, t_list *b, char *command);
int	move_swap_push(t_list *a, t_list *b, char *command);
int	check_sorted(t_list *stack);
void	sort_three_items(t_list *stack1, t_list *stack2);
t_list	*push_swap(char **pile_tab);
#endif /*__PUSH_SWAP_H__*/
