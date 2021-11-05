#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{

	if (!lst)
		return ;
	if (!(*lst))
	{
		(*lst) = new;
		return ;
	}
	//ft_lstlast(*lst)->next = new;
	t_list *tmp = ft_lstlast(*lst);
	tmp->next = new;
}
/*#include <stdio.h>
int main()
{
	t_list	*head;
	t_list	*second;L
	t_list	*new;

	head = malloc(sizeof(t_list *));
	second = malloc(sizeof(t_list *));
	new = malloc(sizeof(t_list *));
	head->content = "hello world 1";
	head->next = second;
	second->content = "hello world 2";
	second->next = NULL;
	new->content  = "surprise bitch";
	new->next = NULL;
	ft_lstadd_back(&head, new);
	printf("%s\n", ft_lstlast(head)->content);
}*/
