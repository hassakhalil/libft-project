#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return lst;
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*#include <stdio.h>

int main ()
{
	t_list	*head;
	t_list	*second;
	t_list	*third;

	head = malloc(sizeof(t_list *));
	second = malloc(sizeof(t_list *));
	third = malloc(sizeof(t_list *));
	head->content  = "helloo 1";
	head->next = second;
	second->content = "helloo 2";
	second->next = third;
	third->content = (void *)1;
	third->next = NULL;
	printf("%d\n", (int )(ft_lstlast(head)->content));
}*/
