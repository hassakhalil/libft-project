#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list *tmp;

	tmp = *lst;
	new->next = tmp;
	*lst = new;
}
/*#include <stdio.h>
int main()
{
	t_list	**lst;
	t_list	*list;
	t_list	*new = NULL;

	list = malloc(sizeof(t_list));
	new = malloc(sizeof(t_list));
	lst = malloc(sizeof(t_list *));
	lst = &list;
	list->content = "fisrt content";
	list->next = NULL;
	new->content = "last content";
	new->next = NULL;
	ft_lstadd_front(lst, new);
	printf("%s\n", list->content);
}*/
