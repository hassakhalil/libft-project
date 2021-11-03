#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

#include <stdio.h>

int main()
{
	t_list	*head;
	t_list	*second;
	t_list	*third;
	char	s[] = "hello world!";

	head = malloc(sizeof(t_list	*));
	second = malloc(sizeof(t_list *));
	third = malloc(sizeof(t_list *));
	head->content = s;
	head->next = second;
	second->content = s;
	second->next = third;
	third->content = s;
	third->next = NULL;
	printf("%d\n", ft_lstsize(head));
	return (0);
}
